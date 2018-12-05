#include "BRScene.h"

	BRScene::BRScene()
	{
		sceneToPlay = -1;
	}

	BRScene::~BRScene()
	{

	}

	void BRScene::update(float deltaTime)
	{
	}

	void BRScene::callScene(int scene) {
		sceneToPlay = scene;
		stop();
	}

	void BRScene::callMainMenuScene() {
		callScene(0);
	}