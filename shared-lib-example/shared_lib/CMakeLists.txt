
project(shared_lib)

add_library(${PROJECT_NAME} SHARED shared_lib.cpp)

target_include_directories(${PROJECT_NAME} PUBLIC .)
