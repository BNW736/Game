# Small Basic Game Engine

A lightweight 2D game engine built with C++ and Raylib, designed as a learning project and foundation for small games and side projects.

## Features

- **Player Movement**: WASD keyboard controls for player character movement
- **Entity System**: Base entity architecture for game objects (Player, Enemy, Bullet)
- **Enemy System**: Enemies that move and can be managed through a vector-based system
- **Bullet System**: Projectile system for firing mechanics
- **Map/Wall System**: Tile-based map with wall collision representation
- **Rendering**: Built on Raylib for efficient 2D graphics

## Architecture

### Core Components

- **Player** (`Player.h`/`Player.cpp`): Controllable character with movement and rendering
- **Enemy** (`Enemy.h`/`Enemy.cpp`): AI-controlled entities that inherit from the base entity class
- **Bullet** (`Bullet.h`/`Bullet.cpp`): Projectile system for game mechanics
- **Entity** (`Entity.h`): Base struct for all game entities with position, speed, and alive state
- **Objects** (`Objects.h`/`Objects.cpp`): Map and wall management system

### Build System

- CMake-based build configuration (CMake 3.14+)
- C++17 standard
- Raylib 5.0 with automatic dependency fetching

## Building

```bash
mkdir build
cd build
cmake ..
make
./game
```

## Dependencies

- **Raylib 5.0** - Graphics library (automatically fetched via CMake)
- **CMake 3.14+** - Build system
- **C++17 Compiler**

## Controls

- **W/A/S/D** - Move player character

## Notes

This is a learning project focusing on core game engine concepts. The engine provides the bare essentials needed to start a small game or prototype. Feel free to extend and customize for your specific needs.
