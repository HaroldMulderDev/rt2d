/**
 * Copyright 2015 Your Name <you@yourhost.com>
 *
 * @file myscene.h
 *
 * @brief description of MyScene behavior.
 */

#ifndef MYSCENE_H
#define MYSCENE_H

#include "BRScene.h"

#include "myentity.h"
#include "button.h"

/// @brief The MyScene class is the Scene implementation.
class MyScene : public BRScene
{
public:
	/// @brief Constructor
	MyScene();
	/// @brief Destructor
	virtual ~MyScene();

	/// @brief update is automatically called every frame
	/// @param deltaTime the elapsed time in seconds
	/// @return void
	virtual void update(float deltaTime);

	void callThisScene();

	void stopEntityColors();

private:
	/// @brief the rotating square in the middle of the screen
	MyEntity* entity;

	Button* button;
	/// @brief a Timer to rotate the color every n seconds
	Timer t;

	bool entityColors;
};

#endif /* SCENE00_H */
