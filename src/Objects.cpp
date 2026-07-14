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
    //Enter the maps logic
}
