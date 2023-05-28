#pragma once
#include <vector>

#include "map_object.h"


class Obstacle : public MapObject{
    
public:
    Obstacle() = default;
    Obstacle(unsigned int x, unsigned int y) : MapObject(x, y){};
    Obstacle(const Obstacle& other) = default;
    Obstacle(Obstacle&& other) = default;
    Obstacle& operator=(const Obstacle& other) = default;
    
    ~Obstacle() = default;

    unsigned int get_obstacle_counter() const {return obstacle_counter_;};
    unsigned int get_obstacle_id() const {return obstacle_id;};
    
    std::vector<Obstacle*> get_obstacle_list() const {return obstacle_list;};
    
    

private:
    unsigned int obstacle_id;
    static unsigned int obstacle_counter_;
    static std::vector<Obstacle*> obstacle_list;


};