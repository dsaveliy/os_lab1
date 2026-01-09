cmake_minimum_required(VERSION 3.10)
project(VectorProject)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

add_library(Number STATIC
    Number.cpp
    Number.h
)
target_include_directories(Number PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

add_library(Vector SHARED
    Vector.cpp
    Vector.h
)
target_include_directories(Vector PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(Vector PUBLIC Number)

add_executable(main main.cpp )
target_include_directories(main PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(main PRIVATE Vector Number)

if(UNIX AND NOT APPLE)
    set_target_properties(main PROPERTIES
        INSTALL_RPATH "$ORIGIN"
        BUILD_WITH_INSTALL_RPATH TRUE
    )
endif()
