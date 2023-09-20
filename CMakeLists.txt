cmake_minimum_required(VERSION 3.5.0)

project(task5 VERSION 1.0.0 LANGUAGES C)

include(CTest)
include_directories(src)

enable_testing()

set(CMAKE_C_STANDARD 99)
set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -pipe -std=c99")
set(CMAKE_BUILD_TYPE Debug)

add_executable(task5 src/main.c)
add_definitions(-DDEBUG -DREAL_COOL_ENGINEER)
add_compile_options(-Wall -Wextra -pedantic -Werror)

include(CPack)
