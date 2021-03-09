cmake_minimum_required(VERSION 3.7)

project(sanitaizer_example
        VERSION 0.1
        DESCRIPTION "sanitaizer_example"
        LANGUAGES CXX
        )

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++20 -pthread")

add_compile_options(-Wdeprecated)
add_compile_options(-fanalyzer)

add_subdirectory(src)
add_subdirectory(app)

if((CMAKE_PROJECT_NAME STREQUAL PROJECT_NAME OR MODERN_CMAKE_BUILD_TESTING)
        AND BUILD_TESTING)
    add_subdirectory(tests)
endif()




