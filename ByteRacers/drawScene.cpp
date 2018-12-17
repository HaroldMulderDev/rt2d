#include "drawScene.h"

DrawScene::DrawScene()
{
	setName("DrawScene");

	button = new Button("Main", GRAY);
	button->setButtonRun(std::bind(&BRScene::callMainMenuScene, this));
	button->position = Point2(SWIDTH / 3, SHEIGHT / 3);

	this->addChild(button);

	Point2 startPoint = Point2(SWIDTH / 2, SHEIGHT / 3);
	cellSize = 8;

	cell = new DrawCell();
	cell->position = startPoint;
	cell->scale = Point2(cellSize, cellSize);
	this->addChild(cell);
}

DrawScene::~DrawScene()
{
   
}

void DrawScene::update(float deltaTime) {

}
