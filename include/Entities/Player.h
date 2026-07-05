#pragma once
#include "library.h"

class Player {
public:
    Vector2 movements;
    float speed = 10.0f;

    Player(float x = 0.0f, float y = 0.0f);

    void move(float dt);
    void draw();
};
