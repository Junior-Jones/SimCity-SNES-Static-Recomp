#ifndef SIMCITY_WIN32_PROBE_SAMPLING_H
#define SIMCITY_WIN32_PROBE_SAMPLING_H

#include <windows.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

/* Opt-in diagnostic, for this headless executable's own simulation thread.
   No allocator, I/O or user-level lock is used while that thread is paused.
   These observations are not valid frame-duration measurements. */
typedef struct ProbeSampling {
    HANDLE target, stop, worker;
    CONTEXT context;
    unsigned samples, count, capacity;
    uint32_t *rvas;
    uintptr_t base;
    DWORD image_bytes;
} ProbeSampling;

static DWORD WINAPI probe_sample_thread(void *opaque) {
    ProbeSampling *s = opaque;
    while (s->count < s->capacity && WaitForSingleObject(s->stop, 1u) == WAIT_TIMEOUT) {
        s->context.ContextFlags = CONTEXT_CONTROL;
        if (SuspendThread(s->target) == (DWORD)-1) break;
        const BOOL context_ok = GetThreadContext(s->target, &s->context);
        ResumeThread(s->target);
        if (!context_ok) break;
        ++s->samples;
        const uintptr_t ip = (uintptr_t)s->context.Rip;
        if (ip >= s->base && ip - s->base < s->image_bytes)
            s->rvas[s->count++] = (uint32_t)(ip - s->base);
    }
    return 0u;
}

static inline int probe_sample_begin(ProbeSampling *s) {
    const uint8_t *module = (const uint8_t *)GetModuleHandleW(NULL);
    if (!module) return 0;
    const IMAGE_DOS_HEADER *dos = (const IMAGE_DOS_HEADER *)module;
    if (dos->e_magic != IMAGE_DOS_SIGNATURE || dos->e_lfanew <= 0) return 0;
    const IMAGE_NT_HEADERS *pe = (const IMAGE_NT_HEADERS *)(module + dos->e_lfanew);
    if (pe->Signature != IMAGE_NT_SIGNATURE) return 0;
    s->base = (uintptr_t)module;
    s->image_bytes = pe->OptionalHeader.SizeOfImage;
    s->capacity = 16000u;
    s->rvas = malloc(s->capacity * sizeof(*s->rvas));
    s->stop = CreateEventW(NULL, TRUE, FALSE, NULL);
    const HANDLE process = GetCurrentProcess();
    if (!s->rvas || !s->stop ||
        !DuplicateHandle(process, GetCurrentThread(), process, &s->target,
            THREAD_SUSPEND_RESUME | THREAD_GET_CONTEXT, FALSE, 0u)) return 0;
    s->worker = CreateThread(NULL, 0u, probe_sample_thread, s, 0u, NULL);
    return s->worker != NULL;
}

static int probe_rva_compare(const void *a, const void *b) {
    const uint32_t x = *(const uint32_t *)a, y = *(const uint32_t *)b;
    return (x > y) - (x < y);
}

static inline void probe_sample_end(ProbeSampling *s, int report) {
    if (s->worker) {
        SetEvent(s->stop);
        WaitForSingleObject(s->worker, INFINITE);
        CloseHandle(s->worker);
    }
    if (s->stop) CloseHandle(s->stop);
    if (s->target) CloseHandle(s->target);
    if (report && s->count) {
        qsort(s->rvas, s->count, sizeof(*s->rvas), probe_rva_compare);
        printf("stock-core-rva-summary samples=%u local=%u\n", s->samples, s->count);
        for (unsigned first = 0u; first < s->count;) {
            unsigned next = first + 1u;
            while (next < s->count && s->rvas[next] == s->rvas[first]) ++next;
            printf("stock-core-rva offset=%08X hits=%u\n", (unsigned)s->rvas[first], next - first);
            first = next;
        }
    }
    free(s->rvas);
}

#endif
