#include "raylib"
#include "Player.h"
#include " Enemy.h"
#include "Bullet.h"


int screenwigth ;
int screenheigth;

Player ME(10,10);
Enemy Enemy;
Bullet bullet;

   while (!WindowShouldClose()) {
        float dt = GetFrameTime();
       me.movements(dt);
       Enemy.movements(dt);
       bullet.movements(dt);
   
   beginbrawing
   ME.draw();
   Enemy.draw();
   bullet.draw();
   endbrawing 
}