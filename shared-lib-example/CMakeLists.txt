cmake_minimum_required(VERSION 3.20)

project(cmake_shared_lib)

add_subdirectory(shared_lib)

add_executable(${PROJECT_NAME} main.cpp)

target_link_libraries(${PROJECT_NAME} PRIVATE shared_lib)
