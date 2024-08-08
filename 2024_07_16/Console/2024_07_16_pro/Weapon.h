#pragma once
#include "Item.h"
class Weapon : public Item
{
private:
	int attack;

public:
	Weapon();
	Weapon(const string& n, const int p, const int a);
	~Weapon();

	int GetAttack();
	void SetAttack(int a);

	void PrintItem();
};

