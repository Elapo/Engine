cmake_minimum_required(VERSION 3.6)
project(Engine)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -lmingw32")
set(SDL2_Flags "-Wl,--no-undefined -static-libgcc")

set(SDL2_ROOT     "C:/MinGW")
set(SDL2_Includes "${SDL2_ROOT}/include")
set(SDL2_LibDir   "${SDL2_ROOT}/lib")

include_directories(${SDL2_Includes})
link_directories(${SDL2_LibDir})

set(SOURCE_FILES main.cpp Collision/Collidable.cpp Collision/Collidable.h 2DPhysics/PhysicsEntity.cpp 2DPhysics/PhysicsEntity.h Core/Entity.h Collision/Quadtree.h Collision/SHash.h Pathfinding/Dijkstra.cpp Pathfinding/Dijkstra.h Config/ConfigHandler.cpp Config/ConfigHandler.h AssetManagement/AssetManager.cpp AssetManagement/AssetManager.h AssetManagement/Asset.cpp AssetManagement/Asset.h 2DGraphics/Renderer.cpp 2DGraphics/Renderer.h)

#add_executable(Engine ${SOURCE_FILES})
add_library(Engine SHARED ${SOURCE_FILES})

target_link_libraries(Engine SDL2main SDL2 SDL2_image SDL2_ttf SDL2_mixer)
