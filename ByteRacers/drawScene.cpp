#include "drawScene.h"

DrawScene::DrawScene()
{
	setName("DrawScene");

	button = new Button("Main", GRAY);
	button->setButtonRun(std::bind(&BRScene::callMainMenuScene, this));
	button->position = Point2(SWIDTH / 3, SHEIGHT / 3);

	this->addChild(button);
}

DrawScene::~DrawScene()
{
   
}

void DrawScene::update(float deltaTime) {

}
