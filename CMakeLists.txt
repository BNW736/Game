cmake_minimum_required(VERSION 3.14)
project(GameEngine)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


include(FetchContent)
FetchContent_Declare(
    raylib
    GIT_REPOSITORY https://github.com/raysan5/raylib.git
    GIT_TAG        5.0
)
FetchContent_MakeAvailable(raylib)


include_directories(include)

file(GLOB SOURCES "src/*.cpp" "src/Entities/*.cpp")

add_executable(game ${SOURCES})

target_link_libraries(game raylib m pthread dl rt X11)