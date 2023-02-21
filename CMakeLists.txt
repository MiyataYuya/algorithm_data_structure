cmake_minimum_required(VERSION 3.10)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(algo_data)

add_subdirectory(src/homework1)
add_subdirectory(src/homework2)

list(APPEND EXTRA_INCLUDES_DIR
    ${PROJECT_SOURCE_DIR}/src/homework1
    ${PROJECT_SOURCE_DIR}/src/homework2
    )

list(APPEND EXTRA_LINKS
    home1
    home2
    )

add_executable(${PROJECT_NAME} src/main.cpp)

target_include_directories(${PROJECT_NAME}
    PUBLIC ${PROJECT_BINARY_DIR}
    PUBLIC ${EXTRA_INCLUDES_DIR}
    )

target_link_libraries(${PROJECT_NAME}
    ${EXTRA_LINKS})