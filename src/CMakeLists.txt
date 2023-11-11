set(HEADER_LIST "${FOPIDBLDC_SOURCE_DIR}/include/pid.hpp")
add_library(modern_library pid.cpp ${HEADER_LIST})
target_include_directories(modern_library PUBLIC ../include)

source_group(
  TREE "${PROJECT_SOURCE_DIR}/include"
  PREFIX "Header Files"
  FILES ${HEADER_LIST})
