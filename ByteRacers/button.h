#ifndef BUTTON_H
#define BUTTON_H

#include <rt2d/entity.h>

class Button : Entity
{
public:

   // Button constructor
   Button(void (*functionToCall)());

   // Button destructor
   ~Button();

   void update(float deltaTime);
	
   void checkClick(double mouseX, double mouseY);

   void (*buttonRun)();
   
private:
};

#endif // !BUTTON_H
