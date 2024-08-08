#pragma once
#include "Inventory.h"

class Shop : public Inventory
{

public:
	Shop();
	~Shop();

	void PrintItems();

	void InsertItem(Item*& insert);
	void EraseItem(int index);
};

