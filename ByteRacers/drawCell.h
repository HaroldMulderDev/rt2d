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

   void updateSprite();
private:
	bool checkClick();
};

#endif // !DRAWCELL_H
