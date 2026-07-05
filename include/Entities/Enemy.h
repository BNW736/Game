#pragma once
#include "library.h"
#include "Entity.h"

class Enemy : public entity
{
public:
    void move(float dt);
    void draw();
};

extern std::vector<Enemy> Enemies;