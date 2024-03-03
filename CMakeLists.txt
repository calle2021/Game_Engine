cmake_minimum_required(VERSION 3.15)

project(main VERSION 1.0)

include_directories(
    engine
    )

set(SOURCES
    app/main.cpp
    )

add_executable(${PROJECT_NAME} WIN32 ${SOURCES})
