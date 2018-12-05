#include "creditScene.h"

CreditScene::CreditScene()
{
	setName("CreditScene");

	button = new Button("Main", GRAY);
	button->setButtonRun(std::bind(&BRScene::callMainMenuScene, this));
	button->position = Point2(SWIDTH / 3, SHEIGHT / 3);

	this->addChild(button);
}

CreditScene::~CreditScene()
{
   
}