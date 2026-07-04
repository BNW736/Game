#pragma once
#include "Entity.h"
 
class Enemy : public Entity{
    public:
    Vector2  movements;
    bool alive;

    void movements(int speed);
    void draw();
}