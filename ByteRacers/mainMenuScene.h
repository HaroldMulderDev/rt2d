#ifndef MAINMENUSCENE_H
#define MAINMENUSCENE_H

#include "BRScene.h"

class MainMenuScene : public BRScene
{
public:

   // MainMenuScene constructor
   MainMenuScene();

   // MainMenuScene destructor
   ~MainMenuScene();

   void callCreditScene();

   void callGameQuit();

   void callGameScene();

   void callDrawScene();

private:

	Button* button;

	Button* button2;

	Button* button3;

	Button* button4;
};

#endif // !MAINMENUSCENE_H
