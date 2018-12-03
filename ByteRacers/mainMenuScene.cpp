#include "mainMenuScene.h"

MainMenuScene::MainMenuScene()
{
	button = new Button();
	button->setButtonRun(std::bind(&MainMenuScene::callCreditScene, this));
	button->position = Point2(SWIDTH / 3, SHEIGHT / 3);

	button2 = new Button();
	button2->setButtonRun(std::bind(&MainMenuScene::callGameQuit, this));
	button2->position = Point2(SWIDTH / 3, SHEIGHT / 2);

	button3 = new Button();
	button3->setButtonRun(std::bind(&MainMenuScene::callGameScene, this));
	button3->position = Point2(SWIDTH / 3, SHEIGHT / 1.4);

	this->addChild(button);
	this->addChild(button2);
	this->addChild(button3);
}

MainMenuScene::~MainMenuScene()
{
	button->~Button();
	button2->~Button();
	button3->~Button();
}

void MainMenuScene::callCreditScene() {
	callScene(2);
}

void MainMenuScene::callGameQuit() {
	callScene(-1);
}

void MainMenuScene::callGameScene() {
	callScene(1);
}