#pragma once
#include "Library.h"
#include "Adventurer.h"
#include "Warrior.h"
#include "Mage.h"
#include "Archer.h"
#include "Thief.h"

class Scene
{
private:
	bool checkover;
	bool gameready;

public:
	Scene();
	virtual ~Scene() = default;		

	bool Getcheckover();
	bool Getgameready();

	void Setcheckover(bool c);
	void Setgameready(bool g);

	virtual void SceneLoop() = 0;
	virtual void SceneClear() = 0;
};

