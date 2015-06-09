cmake_minimum_required (VERSION 2.8)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -std=c++11")

set (PROJECT bmptool)
include_directories(libbmp)
add_subdirectory(libbmp)
set(SOURCES
		main.cpp)
add_executable(${PROJECT} ${SOURCES})
target_link_libraries(${PROJECT} bmp)
