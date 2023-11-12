#set(HEADER_LIST "${FOPIDBLDC_SOURCE_DIR}/include/pid.hpp")
#add_library(CONTROLLIB pid.cpp ${HEADER_LIST})
add_library(CONTROLLIB OBJECT pid.cpp)
target_include_directories(CONTROLLIB PUBLIC ../include)

