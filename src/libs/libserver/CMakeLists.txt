cmake_minimum_required (VERSION 3.8)

if (CMAKE_BUILD_TYPE STREQUAL Release) 
	set(MyProjectName server)
else()
	set(CMAKE_BUILD_TYPE Debug)
	set(MyProjectName serverd)
endif()

message(STATUS "CMAKE_BINARY_DIR:${CMAKE_BINARY_DIR}")
message(STATUS "CMAKE_BUILD_TYPE:${CMAKE_BUILD_TYPE}")
message(STATUS "ProjectName:${MyProjectName}")

set(CMAKE_CXX_FLAGS "-Wall -std=c++14 -pthread -lprotobuf -DEPOLL")
set(CMAKE_CXX_FLAGS_DEBUG "-D_DEBUG -O0 -ggdb")
set(CMAKE_CXX_FLAGS_RELEASE "-O3 -DNDEBUG")

aux_source_directory(. SRC)
add_library(${MyProjectName} STATIC ${SRC} "common.h" "disposable.h" "global.h" "singleton.h" "sn_object.h" "util_string.h" "util_time.h" "protobuf/msg.pb.h" "protobuf/msg.pb.cc" "protobuf/proto_id.pb.h" "protobuf/proto_id.pb.cc" "base_buffer.cpp" "base_buffer.h" "cache_refresh.h" "cache_swap.h"  "component.h" "component_factory.h" "entity.cpp" "entity.h" "entity_system.cpp" "entity_system.h" "object_pool.h" "object_pool_interface.h" "object_pool_mgr.cpp" "object_pool_mgr.h" "regis_to_factory.h" "system.h"
		component.cpp
		packet.h
		message_list.cpp
		message_list.h
		message_system.cpp
		message_system.h
		thread.cpp
		thread.h
)