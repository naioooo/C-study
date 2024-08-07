#pragma once
#include "Adventurer.h"
class Archer : public Adventurer
{
private:
	
public:
	Archer();
	Archer(const string& n, const int s, const int d, const int i, const int l, const int h);
	~Archer();

	void Move() override;
	int Attack() override;
	int Skill() override;

	void ShowStats() override;
};

