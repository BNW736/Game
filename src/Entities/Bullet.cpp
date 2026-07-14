#include "Entities/Bullet.h"

std::vector<Bullet> bullets;

void Bullet::move(float dt) {
    if (live) {
        //Enter the bullets logic
    }
}

void Bullet::draw() {
    if (live) {
        DrawRectangle((int)movements.x, (int)movements.y, 10, 10, BLACK);
    }
}
