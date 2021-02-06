cmake_minimum_required(VERSION 3.10)  # 指定最小的cmake版本为3.10
project(Calculator)  # 指定工程名称为Calculator
add_subdirectory(${PROJECT_SOURCE_DIR}/src)  # 添加源文件目录
add_subdirectory(${PROJECT_SOURCE_DIR}/include)  # 添加库目录