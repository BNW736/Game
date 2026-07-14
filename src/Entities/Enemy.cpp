#include "Entities/Enemy.h"

std::vector<Enemy> Enemies;

void Enemy::move(float dt) {
    if (live) {
        //Enter the enemys logic
    }
}

void Enemy::draw() {
    if (live) {
        DrawRectangle((int)movements.x, (int)movements.y, 10, 10, GREEN);
    }
}
