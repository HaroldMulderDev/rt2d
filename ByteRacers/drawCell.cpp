#include "drawCell.h"

DrawCell::DrawCell()
{
	this->addSprite("assets/drawCell.tga");
	this->sprite()->setupSpriteTGAPixelBuffer("assets/drawCell.tga",0,0);
}

DrawCell::~DrawCell()
{
   
}

void DrawCell::update(float deltaTime) {
	if (input()->getMouseDown(0)) {
		if (checkClick()) {
			updateSprite();
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

void DrawCell::updateSprite() {
	this->sprite()->texture()->pixels()->setPixel(0,0,RED);
}