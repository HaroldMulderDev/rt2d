#ifndef BUTTON_H
#define BUTTON_H

#include <rt2d/entity.h>
#include <functional>

class Button : public Entity
{
public:

   // Button constructor
   Button();

   // Button destructor
   ~Button();

   void update(float deltaTime);
	
   void checkClick(double mouseX, double mouseY);

   void setButtonRun(std::function<void()> value) { buttonRun = value; }
   
private:
	std::function<void()> buttonRun = nullptr;
};

#endif // !BUTTON_H
