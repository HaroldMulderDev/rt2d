#pragma once

#ifndef BRSENE_H
#define BRSCENE_H

#include <rt2d/scene.h>
#include "button.h"

class BRScene : public Scene
{
public:
	/// @brief Constructor
	BRScene();
	/// @brief Destructor
	virtual ~BRScene();

	void onRun() { std::cout << "Running scene: " << name << std::endl; }

	std::string getName() { return name; }

	void setName(std::string n) { name = n; }

	/// @brief update is automatically called every frame
	/// @param deltaTime the elapsed time in seconds
	/// @return void
	virtual void update(float deltaTime);

	int SceneToPlay() { return sceneToPlay; }

	void ResetSceneToPlay() {
		sceneToPlay = -1;
	}

	/// @brief Function used to include navigation to other scenes
	void callScene(int scene);

	void callMainMenuScene();
private:

	bool removeChildren;

	/// @brief Used by scenemanager to play the next scene if its -1 when the scene is no longer running the game should end
	int sceneToPlay;
	
	std::string name;
};

#endif // !BRSCENE_H
