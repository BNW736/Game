#pragma once 
#include "Entity.h"

class Bullet :public Entity{
    public:
    vector2 movements;
    bool live;
    void movements(int speed);
    void draw();
}