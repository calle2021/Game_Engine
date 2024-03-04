cmake_minimum_required(VERSION 3.15)

project(Main VERSION 1.0)

include_directories(
    )

set(SOURCES
    src/Main.cpp
    src/Engine.cpp
    src/DXSetup.cpp
    )

add_executable(${PROJECT_NAME} WIN32 ${SOURCES})
