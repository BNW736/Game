#pragma once 
#include "Entity.h"

class Player :public Entity{
    public:
    vector2 movements;

    void movement(int speed);
    void draw();
    
}