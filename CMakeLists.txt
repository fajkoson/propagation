cmake_minimum_required(VERSION 3.20)
project(propagate)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(propagate SHARED src/propagate.cpp)

target_compile_definitions(propagate 
    PRIVATE 
        PROPAGATE_EXPORTS
)

target_include_directories(propagate 
    PUBLIC
        ${CMAKE_SOURCE_DIR}/include
)

add_executable(propagate_exec src/propagate_exec.cpp)

target_link_libraries(propagate_exec 
    PRIVATE 
        propagate
)