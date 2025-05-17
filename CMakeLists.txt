# Minimum CMake version required
cmake_minimum_required(VERSION 3.15)

# Project name
project(Config VERSION 1.0)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Create a list of source files
set(SOURCES
    src/main.cpp
    src/Config.cpp
)

# Add executable
add_executable(${PROJECT_NAME} ${SOURCES})

# Include the src directory
target_include_directories(${PROJECT_NAME} PRIVATE src)

# Copy configuration file to build directory
configure_file(${CMAKE_SOURCE_DIR}/configuration.ini ${CMAKE_BINARY_DIR}/configuration.ini COPYONLY)