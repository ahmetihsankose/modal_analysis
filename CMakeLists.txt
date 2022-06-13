cmake_minimum_required(VERSION 3.16.3)  # CMake version check
project(myproject)              

find_package(Python3 REQUIRED
COMPONENTS Interpreter Development NumPy)

find_package (Eigen3 3.4 REQUIRED NO_MODULE)

include_directories(
    ${CMAKE_SOURCE_DIR}
    ${CMAKE_SOURCE_DIR}/include
    ${Python3_INCLUDE_DIRS} include
    ${Python3_NumPy_INCLUDE_DIRS} include
    ${Eigen3_INCLUDE_DIRS}
    )

set(SOURCE_FILES main.cpp)

add_executable(test ${SOURCE_FILES})

target_link_libraries(test ${Python3_LIBRARIES})
target_link_libraries (test Eigen3::Eigen)