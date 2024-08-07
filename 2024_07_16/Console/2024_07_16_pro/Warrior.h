#pragma once
#include "Adventurer.h"
class Warrior : public Adventurer
{
private:

public:
	Warrior();
	Warrior(const string& n, const int s, const int d, const int i, const int l, const int h);
	~Warrior();

	void Move() override;
	int Attack() override;
	int Skill() override;

	void ShowStats() override;
};

