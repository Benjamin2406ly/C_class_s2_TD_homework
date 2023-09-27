# cmake_minimum_required(VERSION 3.5.0)

# project(task5 VERSION 1.0.0 LANGUAGES C)

# include(CTest)
# include_directories(include)

# enable_testing()

# set(CMAKE_C_STANDARD 99)
# set(CPACK_PROJECT_NAME ${PROJECT_NAME})
# set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
# set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -pipe -std=c99")
# set(CMAKE_BUILD_TYPE Debug)

# add_executable(task5.exe src/main.c)
# add_executable(my_executable src/main.c)
# add_definitions(-DDEBUG -DREAL_COOL_ENGINEER)
# add_compile_options(-Wall -Wextra -pedantic -Werror)

# include(CPack)

# target_include_directories(my_executable PUBLIC
# ${CMAKE_SOURCE_DIR}/ins)
cmake_minimum_required(VERSION 3.5.0)

project(task5 VERSION 1.0.0 LANGUAGES C)

include(CTest)

# 设置 C 标准
set(CMAKE_C_STANDARD 99)

# 设置编译选项
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -pipe -std=c99")

# 添加可执行文件并指定源文件
add_executable(task5.exe src/task5.c src/main.c)

# 添加宏定义
add_definitions(-DDEBUG -DREAL_COOL_ENGINEER)

# 添加编译选项
add_compile_options(-Wall -Wextra -pedantic -Werror)

# 设置包含头文件的目录
target_include_directories(task5.exe PUBLIC
    ${CMAKE_SOURCE_DIR}/ins
)

# 启用测试
enable_testing()

# 安装相关设置（如果需要）

include(CPack)
