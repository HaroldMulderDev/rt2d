#ifndef DRAWSCENE_H
#define DRAWSCENE_H

#include "BRScene.h"

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
};

#endif // !DRAWSCENE_H
