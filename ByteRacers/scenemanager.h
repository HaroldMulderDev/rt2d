#ifndef SCENEMANAGER_H
#define SCENEMANAGER_H

// Include standard headers
#include <rt2d/core.h>
#include "myscene.h"

class SceneManager
{
public:
	
	// SceneManager constructor
	SceneManager();
	
	// SceneManager Destructor
	~SceneManager();
	
	// Runs a scene and keeps running it until the scene is ready to stop. Returns if the game should stop.
	int loop();

	// Used to set the current active scene. The active scene gets updated by the scenemanager.
	void setScene(int Scene);

	// Used to check isRunning to see if the game should be quit.
	bool IsRunning() {return isRunning; }

private:
	// The current scene that is being run.
	BRScene* activeScene;

	// Core instance
	Core core;

	// Used to check wether or not to continue our gameloop
	bool isRunning;

	// The list of all the scenes which are currently loaded and ready to be used. Only oe scene should be set as the current active scene
	std::vector<BRScene*> loadedScenes;
};


#endif // !scenemanager_h
