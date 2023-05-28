#include "map.h"
#include <algorithm>
#include <iostream>


Map::Map(unsigned int width, unsigned int height) : map_width_(width), map_height_(height)
{
    map_grid_.resize(map_height_, std::vector<unsigned int>(map_width_,0));
};

void Map::place_on_map(const MapObject& object){

    map_objects_.push_back(object);
    map_grid_[object.get_position_y()][object.get_position_x()] = 1;
    std::cout << "Object placed on map." << std::endl;
};


void Map::remove_from_map(const MapObject& object){

    map_objects_.erase(std::remove(map_objects_.begin(), map_objects_.end(), object), map_objects_.end());
    map_grid_[object.get_position_y()][object.get_position_x()] = 0;
    std::cout << "Object removed from map." << std::endl;


};


bool Map::find_on_map(const MapObject& object){

    if (std::find(map_objects_.begin(), map_objects_.end(), object) != map_objects_.end()){
        std::cout << "Obstacle found." << std::endl;
        std::cout << "Obstacle coordinates: " << object.get_position_x() << ", " << object.get_position_y() << std::endl;
        return true;
    }
    else{
        std::cout << "Obstacle not found." << std::endl;
        return false;
    }

};

void Map::display_map() const{

    std::cout << "Map:" << std::endl;
    for (size_t i=0; i< map_grid_.size(); i++){

        for (size_t j=0; j<map_grid_[i].size(); j++){
            std::cout << map_grid_.at(i).at(j) << ' ';
        }
        
        std::cout << std::endl;
    }
    
};