#pragma once
#include "Scene.h"

class GameScene : public Scene
{
private:
	int round;
	vector<Adventurer*> players;

public:
	GameScene();
	GameScene(const vector<Adventurer*>& p);
	~GameScene();

	void SceneLoop();
	void GameLoop();
	void Input();
	void ProcessGame();
	bool CheckGameOver();
	void SceneClear();
};

