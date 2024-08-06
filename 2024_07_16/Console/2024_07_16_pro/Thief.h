#pragma once
#include "Adventurer.h"
class Thief : public Adventurer
{
private:
	int agility;

public:
	Thief();
	Thief(const string& n, const int s, const int d, const int i, const int l, const int e, const int agi);
	~Thief();

	int GetAGI();
	void SetAGI(const int a);

	void Move() override;
	void Attack() override;
	void Steal();

	void ShowStats() override;
};

