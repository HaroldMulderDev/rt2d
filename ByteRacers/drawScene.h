#ifndef DRAWSCENE_H
#define DRAWSCENE_H

#include "BRScene.h"
#include "drawCell.h"

class DrawScene : public BRScene
{
public:

   // DrawScene constructor
   DrawScene();

   // DrawScene destructor
   ~DrawScene();

   virtual void update(float deltaTime);
private:
	Button* button;
	Button* button2;

	DrawCell* cell;

	int cellSize; // The width or height in pixels each cell will take up
	int gridSize; // The width or height in cells the grid will be
	
};

#endif // !DRAWSCENE_H
