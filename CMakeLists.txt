cmake_minimum_required(VERSION 3.10)

project(main VERSION 1.0)

#set(CMAKE_CXX_STANDARD 11)
#set(CMAKE_CXX_STANDARD_REQUIRED True)

configure_file(main_config.h.in main_config.h)

#add_subdirectory(src)

add_executable(${PROJECT_NAME} WIN32 main.cpp)

target_include_directories(${PROJECT_NAME} PUBLIC 
                            "${PROJECT_BINARY_DIR}"
                            )
                            #"${PROJECT_SOURCE_DIR}/src"
                            #)
#target_link_libraries(${PROJECT_NAME} PUBLIC src)