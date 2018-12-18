#ifndef DRAWCELL_H
#define DRAWCELL_H

#include "entity.h"

class DrawCell : public Entity
{
public:

   // DrawCell constructor
   DrawCell();

   // DrawCell destructor
   ~DrawCell();

   void update(float deltaTime);

   void updateSprite(int xx, int yy, RGBAColor c);

   void saveVehicle();
private:
	bool checkClick();

	Vector2d mouseOnObject();

	RGBAColor currentColor;
};

#endif // !DRAWCELL_H
