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

set(CMAKE_CXX_FLAGS "-Wall -std=c++14 -pthread -lprotobuf -DEPOLL")
set(CMAKE_CXX_FLAGS_DEBUG "-D_DEBUG -O0 -ggdb")
set(CMAKE_CXX_FLAGS_RELEASE "-O3 -DNDEBUG")

aux_source_directory(. SRC)
add_library(${MyProjectName} STATIC ${SRC}
        base_buffer.h
        base_buffer.cpp
        cache_refresh.h
        cache_swap.h
        common.h
        component.h
        component.cpp
        component_factory.h
        disposable.h
        entity.h
        entity.cpp
        entity_system.h
        entity_system.cpp
        global.cpp
        global.h
        message_list.cpp
        message_list.h
        message_system.cpp
        message_system.h
        object_pool_interface.h
        object_pool.h
        object_pool_mgr.h
        object_pool_mgr.cpp
        packet.h
        packet.cpp
        thread.cpp
        thread.h
        thread_mgr.cpp
        thread_mgr.h
        regis_to_factory.h
        system.h
        singleton.h
        sn_object.h
        util_string.h
        util_time.h
        network.cpp
        network.h
)