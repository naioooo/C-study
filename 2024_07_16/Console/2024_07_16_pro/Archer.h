#pragma once
#include "Adventurer.h"
class Archer : public Adventurer
{
private:
	int accuracy;
	
public:
	Archer();
	Archer(const string& n, const int s, const int d, const int i, const int l, const int e, const int acc);
	~Archer();

	int GetACC();
	void SetACC(const int a);

	void Move() override;
	void Attack() override;
	void Snipe();

	void ShowStats() override;
};

