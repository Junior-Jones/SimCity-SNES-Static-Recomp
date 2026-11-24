#ifndef SC_V11_CPU_CYCLE_H
#define SC_V11_CPU_CYCLE_H

#include "sc_v11_runtime.h"

/* Prepare exactly one CPU cycle. Keep the DMA check before NMI sampling,
   including the APUIO path that subsequently splits this cycle as 2+4. */
static inline int sc_v11_cpu_cycle_begin(SCV11Runtime *runtime, uint8_t speed) {
#ifdef SIMCITY_EXPERIMENT_FAST_CPU_CYCLE
    if (runtime->route_failed) return 0;
    if (runtime->machine.dma_pending_mask && !sc_v11_process_pending_dma(runtime, speed)) return 0;
    if (runtime->scheduler.nmi_edge_counter) sc_v11_scheduler_cpu_cycle_sample(runtime);
#else
    if (!sc_v11_process_pending_dma(runtime, speed)) return 0;
    sc_v11_scheduler_cpu_cycle_sample(runtime);
#endif
    return 1;
}

#endif
