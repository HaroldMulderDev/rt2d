#include "drawCell.h"

DrawCell::DrawCell()
{
	this->addSprite("assets/vehicle.tga");
	this->sprite()->setupSpriteTGAPixelBuffer("assets/vehicle.tga",0,0);
	currentColor = RED;
}

DrawCell::~DrawCell()
{
   
}

void DrawCell::update(float deltaTime) {
	if (input()->getMouse(0)) {
		if (checkClick()) {
			Vector2d updatePos = mouseOnObject();
			updateSprite(updatePos.x, updatePos.y, currentColor);
		}
	}
}

bool DrawCell::checkClick() {
	double mouseX = input()->getMouseX();
	double mouseY = input()->getMouseY();
	float posX = position.x - ((this->sprite()->width() * scale.x) / 2);
	float posY = position.y - ((this->sprite()->height() * scale.y) / 2);
	//std::cout << "mouse: " << mouseX << " - " << mouseY << "\n" << "Position: " << posX << " - " << posY << "\n" << "Edges: " << posX + (this->sprite()->width() * scale.x) << " - " << posY + (this->sprite()->width() * scale.y) << "\n";
	if (mouseX > posX && mouseX < posX + (this->sprite()->width() * scale.x) && mouseY > posY && mouseY < posY + (this->sprite()->height() * scale.y)) {
		return true;
	}
	return false;
}

Vector2d DrawCell::mouseOnObject() {
	// ((Position - mousePos) / scale) + (width / 2)
	return Vector2d((int(floor((input()->getMouseX() - this->position.x) / this->scale.x))) + (this->sprite()->width() / 2), -(int(floor((input()->getMouseY() - this->position.y) / this->scale.y))) + (this->sprite()->height() / 2) -1);
}

void DrawCell::updateSprite(int xx, int yy, RGBAColor c) {
	this->sprite()->texture()->pixels()->setPixel(xx,yy,c);
	std::cout << "updating pos " << xx << " - " << yy << std::endl;
	std::cout << "drawCell pos " << this->position.x << " - " << this->position.y << std::endl;
}

void DrawCell::saveVehicle() {
	this->sprite()->texture()->writeTGAImage();
}