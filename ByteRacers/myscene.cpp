/**
 * This class describes MyScene behavior.
 *
 * Copyright 2015 Your Name <you@yourhost.com>
 */

#include <fstream>
#include <sstream>

#include "myscene.h"

MyScene::MyScene() : BRScene()
{
	entityColors = true;

	// start the timer.
	t.start();

	// create a single instance of MyEntity in the middle of the screen.
	// the Sprite is added in Constructor of MyEntity.
	entity = new MyEntity();
	entity->position = Point2(SWIDTH/2, SHEIGHT/2);

	button = new Button();
	button->setButtonRun(std::bind(&MyScene::stopEntityColors, this));
	button->position = Point2(SWIDTH/3,SHEIGHT/3);
	
	// create the scene 'tree'
	// add myentity to this Scene as a child.
	this->addChild(entity);
	this->addChild(button);
}

MyScene::~MyScene()
{
	// deconstruct and delete the Tree
	this->removeChild(entity);

	// delete myentity from the heap (there was a 'new' in the constructor)
	delete entity;
}

void MyScene::update(float deltaTime)
{
	// ###############################################################
	// Escape key stops the Scene
	// ###############################################################
	if (input()->getKeyUp(KeyCode::Escape)) {
		callScene(0);
	}

	// ###############################################################
	// Spacebar scales myentity
	// ###############################################################
	if (input()->getKeyDown(KeyCode::Space)) {
		entity->scale = Point(0.5f, 0.5f);
	}
	if (input()->getKeyUp(KeyCode::Space)) {
		entity->scale = Point(1.0f, 1.0f);
	}

	// ###############################################################
	// Rotate color
	// ###############################################################
	if (t.seconds() > 0.0333f) {
		if (entityColors) {
			RGBAColor color = entity->sprite()->color;
			entity->sprite()->color = Color::rotate(color, 0.01f);
			t.start();
		}
	}
}

void MyScene::callThisScene() {
	callScene(0);
}

void MyScene::stopEntityColors() {
	entityColors = false;
}