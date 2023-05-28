#pragma once

class MapObject{

public:
    virtual ~MapObject() = default;
    
    unsigned int get_position_x() const {return position_x_;};
    unsigned int get_position_y() const {return position_y_;};
    
    bool operator==(const MapObject& other) const{
        return (position_x_ == other.position_x_ && position_y_ == other.position_y_);
    };


protected:
    //To prevent instantiation of MapObject
    MapObject(unsigned int x, unsigned int y) : position_x_(x), position_y_(y){};
    
    unsigned int position_x_;
    unsigned int position_y_;

};