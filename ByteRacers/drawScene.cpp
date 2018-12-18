#include "drawScene.h"

DrawScene::DrawScene()
{
	setName("DrawScene");

	Point2 startPoint = Point2(SWIDTH / 2, SHEIGHT / 2);
	cellSize = 8;

	cell = new DrawCell();
	cell->position = startPoint;
	cell->scale = Point2(cellSize, cellSize);
	this->addChild(cell);

	button = new Button("Main", GRAY);
	button->setButtonRun(std::bind(&BRScene::callMainMenuScene, this));
	button->position = Point2(SWIDTH / 3, SHEIGHT / 3);

	this->addChild(button);

	button2 = new Button("Save", GRAY);
	button2->setButtonRun(std::bind(&DrawCell::saveVehicle, cell));
	button2->position = Point2(SWIDTH / 3, SHEIGHT / 2);

	this->addChild(button2);
}

DrawScene::~DrawScene()
{
   
}

void DrawScene::update(float deltaTime) {

}
