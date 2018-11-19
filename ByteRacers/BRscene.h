#pragma once

#ifndef BRSENE_H
#define BRSCENE_H

#include <rt2d/scene.h>

class BRScene : public Scene
{
public:
	/// @brief Constructor
	BRScene();
	/// @brief Destructor
	virtual ~BRScene();

	/// @brief update is automatically called every frame
	/// @param deltaTime the elapsed time in seconds
	/// @return void
	virtual void update(float deltaTime);
};

#endif // !BRSCENE_H
