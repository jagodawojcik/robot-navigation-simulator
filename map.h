#pragma once
#include <vector>

#include "map_object.h"


class Map{
    friend class Robot;
    friend class Obstacle;

public:

    Map() = default;
    Map(unsigned int width, unsigned int height);


    Map(const Map& other) = default;
    Map(Map&& other) = default;


    ~Map() = default;

    void place_on_map(const MapObject& object);
    void remove_from_map(const MapObject& object);
    bool find_on_map(const MapObject& object);
    void display_map() const;


private:
    unsigned int map_width_;
    unsigned int map_height_;
    std::vector<std::vector <unsigned int>> map_grid_;

    std::vector <MapObject> map_objects_;

};