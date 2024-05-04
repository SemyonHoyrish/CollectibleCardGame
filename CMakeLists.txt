cmake_minimum_required(VERSION 3.26)

project(CollectibleCardGame)
set(CMAKE_CXX_STANDARD 17)

include_directories(Force2D/Force2D)
add_subdirectory(Force2D/Force2D)

set(GameSources main.cpp
                )

add_executable(ccg ${GameSources})
target_link_libraries(ccg PUBLIC Force2DLib)
