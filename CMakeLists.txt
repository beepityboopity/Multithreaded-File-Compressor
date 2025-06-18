cmake_minimum_required(VERSION 3.10)

project(MultithreadedFileCompressor)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add source files
add_executable(multithreaded_file_compressor
    src/main.cpp
    src/comp.cpp
    src/decomp.cpp
)

# Include headers
target_include_directories(multithreaded_file_compressor PUBLIC "${PROJECT_SOURCE_DIR}/src")