#pragma once
#include <d2d1.h>
#include <wincodec.h>
#include "Graphics.h"

class SpriteSheet {
	Graphics* graphics;
	ID2D1Bitmap* bitmap;
public:
	//constructor
	SpriteSheet(const wchar_t* filename,Graphics* graphics);

	//destrtuctor
	~SpriteSheet();

	void Draw(float x,float y,int scaleX,int scaley);
};