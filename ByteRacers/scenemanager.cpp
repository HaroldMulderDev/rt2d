/**
 * This class describes SceneManager behavior.
 *
 * Copyright 2015 Your Name <you@yourhost.com>
 */

#include "scenemanager.h"

#include "mainMenuScene.h"
#include "gameScene.h"
#include "creditScene.h"

SceneManager::SceneManager()
{
	// Push all the scenes to 'scenes'
	loadedScenes.push_back(new MainMenuScene());
	loadedScenes.push_back(new GameScene());
	loadedScenes.push_back(new CreditScene());

	activeScene = loadedScenes[0];
	// No need to explicitly clean up the core.
	// As a local var, core will go out of scope and destroy Renderer->ResourceManager.
	// ResourceManager destructor also deletes Shaders.
}

SceneManager::~SceneManager()
{
	delete activeScene; // delete Scene and everything in it from the heap to make space for next Scene
}

bool SceneManager::loop() {
	if (IsRunning()) { // check status of Scene every frame
		core.run(activeScene); // update and render the current scene
		core.showFrameRate(5); // show framerate in output every n seconds
		return true;
	}

	if (activeScene->SceneToPlay() != -1) {
		setScene(activeScene->SceneToPlay());
	}
	else 
	{
		return false;
	}
	//core.cleanup(); // cleanup ResourceManager (Textures + Meshes, but not Shaders)
	
	return true; // Return to Main and its loop with true as this will be the default 
}

void SceneManager::setScene(int scene) {
	if (scene > loadedScenes.size() - 1) {
		activeScene->ResetSceneToPlay();
		activeScene = loadedScenes[scene];
		activeScene->start();
	}
}