cmake_minimum_required(VERSION 3.11)

set(PROJECT_NAME SnakeGame)
project(${PROJECT_NAME} VERSION 1.0 LANGUAGES CXX)
get_directory_property(IS_SUBPROJECT PARENT_DIRECTORY)

if(NOT CMAKE_CXX_EXTENSIONS)
    set(CMAKE_CXX_EXTENSIONS OFF)
endif()

add_executable(${PROJECT_NAME}
	./src/main.cpp
)

add_subdirectory(./src/GameObjects ${CMAKE_CURRENT_BINARY_DIR}/GameObjects)
target_link_libraries(${PROJECT_NAME} SnakeGameObjectLibrary)

set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT ${PROJECT_NAME})