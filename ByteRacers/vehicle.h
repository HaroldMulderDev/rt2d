#ifndef VEHICLE_H
#define VEHICLE_H

#include <rt2d/entity.h>

///@brief The vehicle class is specifically a driving vehicle general physics and breaking is handled in the massBody class
class Vehicle : Entity
{
public:
   // Vehicle constructor
   Vehicle();

   // Vehicle destructor
   ~Vehicle();
private:
};

#endif // !VEHICLE_H
