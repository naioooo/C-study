#pragma once
#include "Adventurer.h"
class Mage : public Adventurer
{
private:

public:
	Mage();
	Mage(const string& n, const int s, const int d, const int i, const int l, const int h);
	~Mage();

	void Move() override;
	int Attack() override;
	int Skill() override;

	void ShowStats() override;
};

