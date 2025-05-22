cmake_minimum_required(VERSION 3.10)
project(NumericScience)

set(CMAKE_CXX_STANDARD 17)
SET(CMAKE_INCLUDE_CURRENT_DIR ON)
INCLUDE_DIRECTORIES("${PROJECT_SOURCE_DIR}")

file(GLOB_RECURSE CALCULATOR_SRC "src/calculator/*.cpp"
                                "src/calculator/*.hpp")

set(MAIN_SRC ${CALCULATOR_SRC})

add_executable(NumericScience ${MAIN_SRC} 
                                src/main.cpp)
