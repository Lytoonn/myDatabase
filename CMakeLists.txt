cmake_minimum_required(VERSION 3.10)
project(myDatabase)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add source files
add_executable(myDatabase 
    src/main.cpp 
    src/files/filehandler.cpp
)

# Include directories
target_include_directories(myDatabase PRIVATE src/files)