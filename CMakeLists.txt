cmake_minimum_required (VERSION 2.8)
set (PROJECT bmptool)

add_compile_options(-std=c++11)

include_directories(libbmp)
add_subdirectory(libbmp)

set(SOURCES
                main.cpp)

add_executable(${PROJECT} ${SOURCES})
target_link_libraries(${PROJECT} bmp)
