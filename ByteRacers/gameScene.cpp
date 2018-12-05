#include "gameScene.h"

GameScene::GameScene()
{
	setName("GameScene");

	button = new Button("Main", GRAY);
	button->setButtonRun(std::bind(&BRScene::callMainMenuScene, this));
	button->position = Point2(SWIDTH / 3, SHEIGHT / 3);

	this->addChild(button);
}

void GameScene::update(float deltaTime) {

}

GameScene::~GameScene()
{
   
}
