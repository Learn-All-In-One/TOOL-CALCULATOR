set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)  # 指定编译后库文件(.dll)输出路径
link_directories(${PROJECT_SOURCE_DIR}/bin)  # 指定库文件(.dll)搜索路径
add_library(judge SHARED is_degital.cpp)  # 编译judge库
add_library(calculator_class SHARED calculator_class.cpp)  # 编译calculator_class库
target_link_libraries(calculator_class judge)