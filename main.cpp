#include<iostream>

#include "map.h"
#include "map_object.h"
#include "obstacle.h"
#include "robot.h"

const unsigned int MAP_WIDTH = 15;
const unsigned int MAP_HEIGHT = 10;

int main()
{   
    Map map(MAP_WIDTH, MAP_HEIGHT);
    
    Obstacle obstacle1(9,5);
    Obstacle obstacle2(4,5);
    Robot robot1(1,1);

    map.place_on_map(obstacle1);
    map.place_on_map(obstacle2);
    map.place_on_map(robot1);

    map.display_map();


    return 0;
}

