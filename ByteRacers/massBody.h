#ifndef MASSBODY_H
#define MASSBODY_H

#include <rt2d/entity.h>

///@brief The MassBody is a combination of a rt2d pixelbuffer and a box2d dynamic body.
class MassBody : public Entity
{
public:

   // MassBody constructor takes the width and the height for the mass body object
   MassBody();

   // MassBody destructor
   ~MassBody();

   virtual void update(float deltaTime);
private:
	// Creates or scales(if possible) the box2d body to fit the size of the body
	void updateBox2dBody();
	
	// Convert pixel based size to size of box2d bodies
	Vector2 Pixels2Box2d(Vector2i size);

	// Convert size of box2d bodies to pixel based size
	Vector2i Box2d2Pixels(Vector2 size);

	// Check a row in the pixelbuffer and check if its empty
	///@param row: The row to check (start top at 0)
	bool checkPixelRowEmpty(int row);

	// Check a collum in the pixelbuffer and check if its empty
	///@param collum: The collum to check (Starts left at 0)
	bool checkPixelCollumEmpty(int Collum);

	// Is used in scaling pixel based size to box2d size
	float box2dScaleUnit;
};

#endif // !MASSBODY_H
