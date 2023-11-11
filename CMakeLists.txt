cmake_minimum_required(VERSION 3.7...3.27)

if(${CMAKE_VERSION} VERSION_LESS 3.27)
    cmake_policy(VERSION ${CMAKE_MAJOR_VERSION}.${CMAKE_MINOR_VERSION})
endif()


project(MyProject VERSION 1.0 DESCRIPTION "Very nice project" LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED On)
set(CMAKE_CXX_EXTENSIONS Off)

add_subdirectory(include)
add_subdirectory(src)



#add_library(PidController STATIC src/pid.cpp include/calc/pid.hpp)
#target_include_directories(calclib PUBLIC include)
#target_compile_features(calclib PUBLIC cxx_std_17)


#add_executable(test src/main.cpp)