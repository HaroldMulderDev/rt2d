#ifndef GAMESCENE_H
#define GAMESCENE_H

#include "BRScene.h"
#include "massBody.h"
#include "Box2D/Box2D.h"

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
	b2World* world;

	Timer t;
	Timer st;

	std::vector<b2Body*> bodies;
	std::vector<MassBody*> entities;

	Button* button;

	MassBody* car;
};

#endif // !GAMESCENE_H
