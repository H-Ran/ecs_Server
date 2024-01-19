cmake_minimum_required(VERSION 3.8)

if (CMAKE_BUILD_TYPE STREQUAL Release)
    set(MyProjectName server)
else ()
    set(CMAKE_BUILD_TYPE Debug)
    set(MyProjectName serverd)
endif ()

message(STATUS "CMAKE_BINARY_DIR:${CMAKE_BINARY_DIR}")
message(STATUS "CMAKE_BUILD_TYPE:${CMAKE_BUILD_TYPE}")
message(STATUS "ProjectName:${MyProjectName}")

project(${MyProjectName})

set(CMAKE_CXX_FLAGS "-Wall -std=c++14 -pthread -lprotobufd -DEPOLL")
set(CMAKE_CXX_FLAGS_DEBUG "-D_DEBUG -O0 -ggdb")
set(CMAKE_CXX_FLAGS_RELEASE "-O3 -DNDEBUG")

aux_source_directory(. SRC)
add_library(${MyProjectName} STATIC ${SRC})

#target_link_libraries(${MyProjectName} PUBLIC )