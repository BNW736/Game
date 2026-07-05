#include "Entities/Bullet.h"

std::vector<Bullet> bullets;

void Bullet::move(float dt) {
    if (live) {
        movements.y -= speed * dt;
    }
}

void Bullet::draw() {
    if (live) {
        DrawRectangle((int)movements.x, (int)movements.y, 10, 10, BLACK);
    }
}
