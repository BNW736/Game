#include "Objects.h"

std::vector<std::vector<int>> map = {
    {1,1,1,1,1,1,1},
    {1,1,0,0,0,0,1},
    {1,1,0,0,1,0,1},
    {1,0,0,0,0,0,1},
    {1,1,1,1,1,1,1}
};

std::vector<float> Wall;

void wall(){
    int rows = map.size();
    int cols = map[0].size();
    int tilesize = 64;

    for (int x = 0; x < rows; x++) {
        for (int y = 0; y < cols; y++) {
            if (map[x][y] == 1) {
                Wall.push_back((float) x * tilesize);
                Wall.push_back((float) y * tilesize);
                Wall.push_back((float) tilesize);
                Wall.push_back((float) tilesize);
            }
        }
    }
}