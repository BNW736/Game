#include "render.h"

int main(){
   Player me(10, 10);
   Enemy enemy;
   Bullet bullet;

   const int screenWidth = 800;
   const int screenHeight = 450;

   InitWindow(screenWidth, screenHeight, "raylib");
   SetTargetFPS(60);

   while (!WindowShouldClose()) {
      float dt = GetFrameTime();
      me.move(dt);
      enemy.move(dt);
      bullet.move(dt);

      BeginDrawing();
      ClearBackground(RAYWHITE);
      render();
      me.draw();
      enemy.draw();
      bullet.draw();
      EndDrawing();
   }
   CloseWindow();
   return 0;
}