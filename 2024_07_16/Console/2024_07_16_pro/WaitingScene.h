#pragma once
#include "Scene.h"

class WaitingScene : public Scene
{
	vector<Adventurer*> players;

public:
	WaitingScene();
	~WaitingScene();

	vector<Adventurer*> Getplayers();
	void Setplayers(const vector<Adventurer*>& p);

	void SceneLoop();
	void WaitingLoop();
	bool CheckGameReady();
	void SceneClear();
};

