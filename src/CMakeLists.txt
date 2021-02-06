set(CMAKE_BUILD_TYPE Release)  # 指定构建类型为Realease
set(CMAKE_LANGUAGE_COMPILER "g++")  # 指定编译器为g++
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)  # 指定编译后二进制文件(.exe)输出路径
include_directories(${PROJECT_SOURCE_DIR}/include)  # 指定头文件(.h)搜索路径
add_executable(calculator main.cpp)  # 编译可执行文件
target_link_libraries(calculator judge calculator_class)  # 将judge库和calculator_class库链接到可执行文件