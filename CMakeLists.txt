cmake_minimum_required(VERSION 3.8)

project(Chuchu)
set(SRC_FILES
	src/main.cpp)

add_executable(Chuchu ${SRC_FILES})

set(SFML_BUILD_WINDOW true)
set(SFML_BUILD_GRAPHICS true)
add_subdirectory(SFML)
include_directories(SFML/include)
target_link_libraries(Chuchu sfml-graphics sfml-window)
