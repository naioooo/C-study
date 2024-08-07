#pragma once
#include "Adventurer.h"
class Thief : public Adventurer
{
private:

public:
	Thief();
	Thief(const string& n, const int s, const int d, const int i, const int l, const int h);
	~Thief();

	void Move() override;
	int Attack() override;
	int Skill() override;

	void ShowStats() override;
};

