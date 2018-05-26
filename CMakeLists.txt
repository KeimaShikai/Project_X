cmake_minimum_required(VERSION 3.0)

list (APPEND X_HEADERS "src/headers")

list (APPEND X_SOURCES "src/headers/main.h")
list (APPEND X_SOURCES "src/sources/main.cpp")

include_directories(${X_HEADERS})

add_executable(px ${X_SOURCES})