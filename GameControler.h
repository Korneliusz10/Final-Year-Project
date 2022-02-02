#pragma once
#include"GameLevel.h"

class GameControler {

	GameControler(){}
	static GameLevel* currentLevel;

public:
	static bool loading;

	static void Init();

	static void LoadInitLevel(GameLevel* level);
	static void SwithLevel(GameLevel* level);
	static void Render();
	static void Update();
};