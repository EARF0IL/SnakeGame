cmake_minimum_required(VERSION 3.11)

set(GO_PROJECT_NAME SnakeGameObjectLibrary)
project(${GO_PROJECT_NAME} VERSION 1.0 LANGUAGES CXX)

add_library(${GO_PROJECT_NAME} STATIC
	./src/test.cpp
	./include/GameObjects/test.h
)

target_include_directories(${GO_PROJECT_NAME} PUBLIC ./include)
target_compile_features(${GO_PROJECT_NAME} PUBLIC cxx_std_17)