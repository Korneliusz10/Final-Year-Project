#pragma once
#include "Graphics.h"
#include "SpriteSheet.h"

class GameLevel {

protected:
	static Graphics* graphics;

public:
	static void Init(Graphics* Ngraphics) {
		graphics = Ngraphics;
	}


	virtual void load() = 0;
	virtual void Unload() = 0;
	virtual void Render() = 0;
	virtual void Update() = 0;
};