#pragma once
#include "Adventurer.h"
class Mage : public Adventurer
{
private:
	int mana;

public:
	Mage();
	Mage(const string& n, const int s, const int d, const int i, const int l, const int e, const int m);
	~Mage();

	int GetMana();
	void SetMana(const int m);

	void Move() override;
	void Attack() override;
	void Fireball();

	void ShowStats() override;
};

