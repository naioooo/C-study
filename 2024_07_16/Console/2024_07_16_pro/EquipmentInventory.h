#pragma once
#include "Inventory.h"
class EquipmentInventory : public Inventory
{

public:
	EquipmentInventory();
	~EquipmentInventory();

	void PrintItems();

	void InsertItem(Item*& insert);
	void EraseItem(int index);
};

