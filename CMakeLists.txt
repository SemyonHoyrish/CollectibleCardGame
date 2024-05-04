cmake_minimum_required(VERSION 3.26)

project(CollectibleCardGame)
set(CMAKE_CXX_STANDARD 17)

include_directories(Force2D/Force2D)
add_subdirectory(Force2D/Force2D)

set(GameSources main.cpp
        Scenes/GameFieldScene.cpp
        Scenes/GameFieldScene.h
        GameObjects/HandCard.cpp
        GameObjects/HandCard.h
        GameObjects/BoardCard.cpp
        GameObjects/BoardCard.h
        StateManager.cpp
        StateManager.h
        CardInfo.h
)

add_executable(ccg ${GameSources})
target_link_libraries(ccg PUBLIC Force2DLib)
file(COPY Force2D/anisa_sans.ttf DESTINATION ${CMAKE_BINARY_DIR})
file(COPY assets DESTINATION ${CMAKE_BINARY_DIR})
