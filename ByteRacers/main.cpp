/**
 * Copyright 2015 Your Name <you@yourhost.com>
 *
 * @brief Description of My Awesome Game.
 *
 * @file main.cpp
 *
 * @mainpage My Awesome Game
 *
 * @section intro Introduction
 *
 * Detailed description of My Awesome Game.
 *
 * There's even a second paragraph.
 */

#include "scenemanager.h"

/// @brief main entry point
int main( void )
{

	// SceneManager instance
	SceneManager sceneManager;

	while (sceneManager.IsRunning()) {
		if (sceneManager.loop()) {

		}
	}



	return 0;
}
