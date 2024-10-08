cmake_minimum_required(VERSION 3.10)
project(NOT-MARIO)

set(CMAKE_CXX_STANDARD 17)

set(SFML_ROOT "/opt/homebrew/include/SFML")

set(CMAKE_MODULE_PATH "${SFML_ROOT}/cmake/Modules")

include_directories(include)

find_package(SFML 2.5 COMPONENTS system window graphics REQUIRED)

file(GLOB SOURCES "src/*.cpp")

add_executable(${PROJECT_NAME} ${SOURCES})

target_link_libraries(${PROJECT_NAME} sfml-system sfml-window sfml-graphics)