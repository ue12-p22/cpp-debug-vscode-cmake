cmake_minimum_required(VERSION 3.0)
project(MinesUE12)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_compile_options(
    -Wall    
    -Wextra  
    -Wshadow  
    -Wnon-virtual-dtor 
    -Wfatal-errors
)

include_directories(include)
add_subdirectory( src )
