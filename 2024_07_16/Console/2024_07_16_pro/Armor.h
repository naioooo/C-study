#pragma once
#include "Item.h"
class Armor :public Item
{
private:
	int defense;

public:
	Armor();
	Armor(const string& n, const int p, const int d);
	~Armor();

	int GetDefense();
	void SetDefense(int d);

	void PrintItem();

};

