# ==========================================
# FILE: CMakeLists.txt (Located in Project Root)
# ==========================================
cmake_minimum_required(VERSION 3.10)
project(CalculatorProject LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Define the source directory for clarity
set(SRC_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src)

# 1. Create the library from the src folder
add_library(calculator_lib ${SRC_DIR}/calculator.cpp)

# 2. Define the Test Executable using the src folder
add_executable(ci_test ${SRC_DIR}/test_runner.cpp)

# 3. Link and include headers
target_link_libraries(ci_test PRIVATE calculator_lib)
target_include_directories(ci_test PRIVATE ${SRC_DIR})

# 4. Enable CTest integration
enable_testing()
add_test(NAME CalculatorAdditionTest COMMAND ci_test)