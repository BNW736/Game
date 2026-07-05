#include "Entities/Player.h"

Player::Player(float x, float y) {
    movements = { x, y };
}

void Player::move(float dt) {
    if (IsKeyDown(KEY_W)) { movements.y += speed * dt; }
    else if (IsKeyDown(KEY_S)) { movements.y -= speed * dt; }
    else if (IsKeyDown(KEY_A)) { movements.x -= speed * dt; }
    else if (IsKeyDown(KEY_D)) { movements.x += speed * dt; }
}

void Player::draw() {
    DrawRectangle((int)movements.x, (int)movements.y, 10, 10, RED);
}



