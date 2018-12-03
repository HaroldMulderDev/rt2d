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
		if (removeChildren) {
			for each (Entity* child in children())
			{
				removeChild(child);
			}
		}
	}

	void BRScene::callScene(int scene) {
		sceneToPlay = scene;
		removeChildren = true;
		stop();
	}