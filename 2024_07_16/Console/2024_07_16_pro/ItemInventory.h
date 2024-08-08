#pragma once
#include "Inventory.h"
class ItemInventory : public Inventory
{


public:
	ItemInventory();
	~ItemInventory();

	void PrintItems();

	void InsertItem(Item*& insert);
	void EraseItem(int index);
};

