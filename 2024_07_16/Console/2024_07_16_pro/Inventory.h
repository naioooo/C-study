#pragma once
#include "Library.h"
#include "Item.h"
#include "Weapon.h"
#include "Armor.h"

class Inventory
{
protected:
	vector<pair<Item*, int>> items; //아이템, 수량

public:
	Inventory();
	Inventory(const vector<pair<Item*, int>> i);
	~Inventory();

	vector<pair<Item*, int>>& GetItems();
	void SetItems(const vector<pair<Item*, int>>& i);

	virtual void InsertItem(Item*& insert);
	virtual void EraseItem(int index);
	virtual bool CheckItem(Item*& insert);

	virtual void PrintItems();
};

