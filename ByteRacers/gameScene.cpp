#include "gameScene.h"

GameScene::GameScene()
{
	setName("GameScene");

	button = new Button("Main", GRAY);
	button->setButtonRun(std::bind(&BRScene::callMainMenuScene, this));
	button->position = Point2(SWIDTH / 3, SHEIGHT / 3);

	this->addChild(button);

	car = new MassBody();
	car->position = Point2(SWIDTH / 3, SHEIGHT / 2);

	this->addChild(car);

	// Define the gravity vector.
	b2Vec2 gravity(1.0f, 0.0f);

	// Construct a world object, which will hold and simulate the rigid bodies.
	world = new b2World(gravity);
}

void GameScene::update(float deltaTime) {
	// Prepare for simulation. Typically we use a time step of 1/60 of a
	// second (60Hz) and 10 iterations. This provides a high quality simulation
	// in most game scenarios.
	float32 timeStep = 1.0f / 60.0f;
	int32 velocityIterations = 8;
	int32 positionIterations = 3;

	if (t.seconds() > timeStep - deltaTime) {
		// Instruct the world to perform a single step of simulation.
		// It is generally best to keep the time step and iterations fixed.
		world->Step(timeStep, velocityIterations, positionIterations);

		// copy position and angle of the bodies to the RT2D Entities.
		int s = bodies.size();
		for (int i = 0; i < s; i++) {
			// get from Box2D
			b2Vec2 position = bodies[i]->GetPosition();
			float32 angle = bodies[i]->GetAngle();

			// apply to RT2D
			entities[i]->position.x = position.x * 100;
			entities[i]->position.y = SHEIGHT - (position.y * 100);
			entities[i]->rotation.z = angle;
		}

		t.start();
	}
}

GameScene::~GameScene()
{
   
}
