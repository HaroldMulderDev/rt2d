#ifndef GAMESCENE_H
#define GAMESCENE_H

#include "BRScene.h"

class GameScene : public BRScene
{
public:

   // GameScene constructor
   GameScene();

   // GameScene destructor
   ~GameScene();

   /// @brief update is automatically called every frame
	/// @param deltaTime the elapsed time in seconds
	/// @return void
   virtual void update(float deltaTime);
private:
	Button* button;
};

#endif // !GAMESCENE_H
