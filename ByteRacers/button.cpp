#include "Button.h"

Button::Button(void (*functionToCall)())
{
	buttonRun = functionToCall;
}

Button::~Button()
{
   
}

void Button::update(float deltaTime) {

}

void Button::checkClick(double mouseX, double mouseY) {
	if (mouseX > position.x && mouseX < position.x + scale.x && mouseY > position.y && mouseY < position.y + scale.y) {
		*buttonRun;
	}
}