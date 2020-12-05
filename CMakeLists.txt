cmake_minimum_required(VERSION 3.7)
project(X)

#headers dirs
list (APPEND X_HEADERS "src/headers")

#src
list (APPEND X_SOURCES "src/headers/CMain.h")
list (APPEND X_SOURCES "src/sources/CMain.cpp")
list (APPEND X_SOURCES "src/sources/main.cpp")

#for windows
set(SDL2_PATH "E:\\C++_prj\\c++libs")
set(SDL2_IMAGE_PATH "E:\\C++_prj\\c++libs")
set(SDL2_MIXER_PATH "E:\\C++_prj\\c++libs")
set(SDL2_TTF_PATH "E:\\C++_prj\\c++libs")

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${X_SOURCE_DIR}/scripts")

find_package(SDL2 REQUIRED)
find_package(SDL2_image REQUIRED)
find_package(SDL2_mixer REQUIRED)
find_package(SDL2_ttf REQUIRED)

include_directories(${X_HEADERS}
                    ${SDL2_INCLUDE_DIR}
                    ${SDL2_IMAGE_INCLUDE_DIR}
                    ${SDL2_MIXER_INCLUDE_DIR}
                    ${SDL2_TTF_INCLUDE_DIR})

add_executable(px ${X_SOURCES})

target_link_libraries(px ${SDL2_LIBRARY}
                            ${SDL2_IMAGE_LIBRARIES}
                            ${SDL2_MIXER_LIBRARIES}
                            ${SDL2_TTF_LIBRARIES})
