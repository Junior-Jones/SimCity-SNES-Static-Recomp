file(MAKE_DIRECTORY "${EVIDENCE}")
foreach(mode IN ITEMS world-map world-map-control)
    execute_process(
        COMMAND "${PROBE}" "${ROM}" "${mode}" "${EVIDENCE}"
        RESULT_VARIABLE result
        OUTPUT_VARIABLE output
        ERROR_VARIABLE failure)
    message(STATUS "${mode}:\n${output}")
    if(NOT result STREQUAL "0")
        message(FATAL_ERROR "${mode} exited with ${result}\n${failure}")
    endif()
    string(REGEX MATCH "parity [^\r\n]+" summary "${output}")
    if(summary STREQUAL "")
        message(FATAL_ERROR "${mode} did not report parity data")
    endif()
    if(mode STREQUAL "world-map")
        set(sandbox_summary "${summary}")
    elseif(NOT summary STREQUAL sandbox_summary)
        message(FATAL_ERROR "Guest comparison differs\n${sandbox_summary}\n${summary}")
    endif()
endforeach()
