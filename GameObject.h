#pragma once
#include "SpriteSheet.h"
#include "position.h"

class GameObject
{
	SpriteSheet* sprites;
	Graphics* graphics;
	
public:
	GameObject(Graphics* graphics);
	~GameObject();
	position pos;
	int size;
	void draw();
	void setImage(const wchar_t*);
};

