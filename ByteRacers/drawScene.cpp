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
	gridSize = 32;
	DrawCell* cell;

	for (int xx = 0; xx <= gridSize - 1; xx++) {
		for (int yy = 0; yy <= gridSize - 1; yy++) {
			
			cell = new DrawCell();
			cell->position = startPoint + Point2(xx*cellSize,yy*cellSize);
			cell->scale = Point2(cellSize, cellSize);
			drawGrid.push_back(cell);
			this->addChild(cell);
		}
	}
}

DrawScene::~DrawScene()
{
   
}

void DrawScene::update(float deltaTime) {

}
