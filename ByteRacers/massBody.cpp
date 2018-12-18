#include "massBody.h"

MassBody::MassBody()
{
	this->addSprite("assets/square.tga");
	this->sprite()->setupSpriteTGAPixelBuffer("assets/square.tga", 0, 0);
}

MassBody::~MassBody()
{
   
}

void MassBody::update(float deltaTime)
{

}
