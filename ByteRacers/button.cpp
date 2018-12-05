#include "Button.h"
#include <iostream>

Button::Button(std::string name, RGBAColor c)
{
	this->addSprite("assets/button.tga");
	this->sprite()->color = c;

	display = new Text();
	display->message(name, c);
	setTextScale(0.5);
	setTextOffset(-24);
	this->addChild(display);
}

Button::~Button()
{
   
}

void Button::update(float deltaTime) {
	this->sprite()->color = WHITE;
	if (input()->getMouseDown(0)) {
		checkClick(input()->getMouseX(), input()->getMouseY());
	}
}

void Button::checkClick(double mouseX, double mouseY) {
	float posX = position.x - ((this->sprite()->width() * scale.x) / 2);
	float posY = position.y - ((this->sprite()->height() * scale.y) / 2);
	//std::cout << "mouse: " << mouseX << " - " << mouseY << "\n" << "Position: " << posX << " - " << posY << "\n" << "Edges: " << posX + (this->sprite()->width() * scale.x) << " - " << posY + (this->sprite()->width() * scale.y) << "\n";
	if (mouseX > posX && mouseX < posX + (this->sprite()->width() * scale.x) && mouseY > posY && mouseY < posY + (this->sprite()->height() * scale.y)) {
		this->sprite()->color = BLUE;
		buttonRun();
	}
}