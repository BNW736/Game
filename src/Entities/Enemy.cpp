#include "Entities/Enemy.h"

std::vector<Enemy> Enemies;

void Enemy::move(float dt) {
    if (live) {
        movements.y += speed * dt;
    }
}

void Enemy::draw() {
    if (live) {
        DrawRectangle((int)movements.x, (int)movements.y, 10, 10, GREEN);
    }
}
