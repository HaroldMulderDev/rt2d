#include "drawScene.h"

DrawScene::DrawScene()
{
	setName("DrawScene");

	button = new Button("Main", GRAY);
	button->setButtonRun(std::bind(&BRScene::callMainMenuScene, this));
	button->position = Point2(SWIDTH / 3, SHEIGHT / 3);

	this->addChild(button);

	cell = new DrawCell();
	cell->position = Point2(SWIDTH / 2, SHEIGHT / 3);
	cell->scale = Point2(16,16);

	this->addChild(cell);
}

DrawScene::~DrawScene()
{
   
}

void DrawScene::update(float deltaTime) {

}
