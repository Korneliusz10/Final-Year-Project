#pragma once

#include "GameLevel.h"

class Level1 : public GameLevel {

	// Tests
	float y;
	float x;

public:
	void load()	override;
	void Unload()  override;
	void Render()  override;
	void Update()  override;

};