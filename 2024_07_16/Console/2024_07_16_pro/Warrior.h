#pragma once
#include "Adventurer.h"
class Warrior : public Adventurer
{
private:
	int defense;

public:
	Warrior();
	Warrior(const string& n, const int s, const int d, const int i, const int l, const int e, const int def);
	~Warrior();

	int GetDEF();
	void SetDEF(const int d);

	void Move() override;
	void Attack() override;
	void Block();

	void ShowStats() override;
};

