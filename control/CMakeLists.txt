aux_source_directory(. SRC_CONTROL)
add_library(control SHARED ${SRC_CONTROL})
target_link_libraries(control core)