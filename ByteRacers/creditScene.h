#ifndef CREDITSCENE_H
#define CREDITSCENE_H

#include "BRScene.h"

class CreditScene : public BRScene
{
public:

   // CreditScene constructor
   CreditScene();

   // CreditScene destructor
   ~CreditScene();
private:
	Button* button;
};

#endif // !CREDITSCENE_H
