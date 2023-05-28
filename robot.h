#include "map_object.h"

class Robot : public MapObject{
public:
    
    Robot() = default;
    Robot(unsigned int x, unsigned int y) : MapObject(x, y){}; 
    Robot(const Robot& other) = default;
    Robot(Robot&& other) = default;
    
    ~Robot() = default;
    
    

private:
protected:


};