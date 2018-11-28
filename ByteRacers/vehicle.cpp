#include "Vehicle.h"

Vehicle::Vehicle()
{
	this->addSprite("assets/square.tga");
	this->sprite()->color = RED;
}

Vehicle::~Vehicle()
{
   
}
