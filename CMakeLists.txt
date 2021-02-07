cmake_minimum_required(VERSION 3.10)
project(Calculator)


set(CMAKE_BUILD_TYPE Release)
set(CMAKE_LANGUAGE_COMPILER "g++")
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

include_directories(${PROJECT_SOURCE_DIR}/core ${PROJECT_SOURCE_DIR}/control)
link_directories(${PROJECT_SOURCE_DIR}/bin)


add_subdirectory(${PROJECT_SOURCE_DIR}/main)
add_subdirectory(${PROJECT_SOURCE_DIR}/core)
add_subdirectory(${PROJECT_SOURCE_DIR}/control)