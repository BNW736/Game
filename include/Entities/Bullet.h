#pragma once
#include "library.h"
#include "Entity.h"

class Bullet : public entity
{
public:
    Vector2 distarnt;
    void move(float dt);
    void draw();
};

extern std::vector<Bullet> bullets;