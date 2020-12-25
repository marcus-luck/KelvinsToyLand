cmake_minimum_required (VERSION 3.12)

project (
    KelvinToyland 
    VERSION 1.0
    DESCRIPTION "Toys for Kelvin"
    LANGUAGES CXX
)

set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Werror -std=c++17")

set (source_dir "${PROJECT_SOURCE_DIR}/src/lib")
set (include_dir "${PROJECT_SOURCE_DIR}/src/include")

set (SFML_DIR "D:/cpp_library/SFML/SFML-install/lib/cmake/SFML")
find_package(SFML 2.5 COMPONENTS network audio graphics window system REQUIRED)


## In most cases better set in the CMake cache

message($(include_dir))
add_executable (
    main src/lib/ball.cpp
    src/lib/game.cpp
    src/lib/main.cpp
    src/lib/ball.cpp
)
target_include_directories(main PUBLIC src/include)

# add_library(game "${source_dir}/game.cpp")

target_link_libraries(main sfml-graphics) # sfml-audio ball game)
