#include "massBody.h"

MassBody::MassBody()
{
	box2dScaleUnit = 1;
	this->addSprite("assets/vehicle.tga");
	this->sprite()->setupSpriteTGAPixelBuffer("assets/vehicle.tga", 0, 0);
	// This will be redundant as time goes on
	// Make scale of sprite to fit body size (Only possible after box2d testing)
}

MassBody::~MassBody()
{
}

void MassBody::update(float deltaTime)
{

}

void MassBody::updateBox2dBody() {
	// Steps to run per dimension:
	// Get width and height of pixelbuffer (Minus any empty space on sides, top or bottom)
	// Get the next position of the box2dBody by using half of the width added to the start position of the pixels multiplied by the box2dScaleUnit
	// Get accurate b2d scales by multiplying the current size of pixelbuffer 'x' by the box2dScaleUnit.
	// Update b2d box by multiplying its default size. and positioning it on the basis of the filled in area of the pixelbuffer

	// width
	float boxStart = 0;
	while (checkPixelCollumEmpty(boxStart)) {
		boxStart++;
	}

	float boxEnd = this->sprite()->texture()->width;
	while (checkPixelCollumEmpty(boxEnd)) {
		boxEnd--;
	}

	float boxWidth = boxEnd - boxStart;
	float boxHorizontalPos = (boxStart + (boxWidth / 2)) * box2dScaleUnit;

	// Height
	boxStart = 0;
	while (checkPixelRowEmpty(boxStart)) {
		boxStart++;
	}
	
	boxEnd = this->sprite()->texture()->height;
	while (checkPixelRowEmpty(boxEnd)) {
		boxEnd--;
	}

	float boxHeight = (boxEnd - boxStart) * box2dScaleUnit;
	float boxVerticalPos = (boxStart + (boxHeight / 2)) * box2dScaleUnit;
}

Vector2 MassBody::Pixels2Box2d(Vector2i size) {
	return Vector2(size.x * box2dScaleUnit, size.y * box2dScaleUnit);
}

Vector2i MassBody::Box2d2Pixels(Vector2 size){
	return Vector2i(size.x / box2dScaleUnit, size.y / box2dScaleUnit);
}

bool MassBody::checkPixelRowEmpty(int row) {
	PixelBuffer* pixels = this->sprite()->texture()->pixels();
	for (int x = 0; x <= pixels->width-1; x++) {
		if (this->sprite()->texture()->pixels()->getPixel(x, row) != (0,0,0,255)) {
			return false;
		}
	}
	return true;
}

bool MassBody::checkPixelCollumEmpty(int collum) {
	PixelBuffer* pixels = this->sprite()->texture()->pixels();
	for (int y = 0; y <= pixels->height-1; y++) {
		if (this->sprite()->texture()->pixels()->getPixel(collum, y) != (0, 0, 0, 255)) {
			return false;
		}
	}
	return true;
}
