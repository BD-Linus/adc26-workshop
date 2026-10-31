# Mandatory line, sets the minimum version of CMake that should be used with this repository.
# I specified 3.25 because I trust it. However, currently I have 3.26 installed on my machine.
# To verify your version run
# $ cmake --version
cmake_minimum_required(VERSION 3.25)

# Sets a few variables, like PROJECT_NAME
project(Adc26Workshop)

# Always use the newest C++ standard on green-field projects if possible.
# C++20 is a safe choice for older machines
set(CMAKE_CXX_STANDARD 20)

# I like to download the dependencies to the same folder as the project.
# If you want to install them system wide, set CPM_SOURCE_CACHE with the path to the dependencies
# either as an environment variable or pass it to the cmake script with -DCPM_SOURCE_CACHE=<path>.
set(LIB_DIR ${CMAKE_CURRENT_SOURCE_DIR}/libs)

# Downloads CPM if not already downloaded. CPM is an easy-to-use package manager nicely integrated with CMake.
include(cmake/cpm.cmake)

include(cmake/CompilerWarnings.cmake)
include(cmake/Util.cmake)

# This commands downloads AND configures JUCE. It sets up some variables, like JUCE_SOURCE_DIR.
add_subdirectory(libs/juce)
add_subdirectory(libs/wolfsound-dsp-utils)

# Adds googletest.
set(INSTALL_GTEST OFF)
set(gtest_force_shared_crt ON)
add_subdirectory(libs/googletest)

# This command allows running tests from the "build" folder (the one where CMake generates the project to).
enable_testing()

# Adds all the targets configured in the "plugin" folder.
add_subdirectory(plugin)

# Adds all the targets configured in the "test" folder.
add_subdirectory(test)
