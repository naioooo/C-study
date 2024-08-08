#include "EquipmentInventory.h"

EquipmentInventory::EquipmentInventory()
{
}

EquipmentInventory::~EquipmentInventory()
{
}

void EquipmentInventory::PrintItems()
{
	if (items.empty())
	{
		cout << "장비의 아이템이 없습니다" << endl;
		return;
	}

	cout << "===========나의 장비창===========" << endl;
	for (int i = 0; i < items.size(); i++)
	{
		cout << i + 1 << "번 " << items[i].first->GetName() << " : " << items[i].second << "개 ";
		if (i % 3 == 2)
			cout << endl;
	}
	cout << endl;
	cout << "==================================" << endl;
}

void EquipmentInventory::InsertItem(Item*& insert)
{
	bool check = false;

	for (auto& item : items)
	{
		if (item.first->GetName() == insert->GetName())
		{
			check = true;
			break;
		}
	}

	if (!check)
	{
		items.emplace_back(insert, 1);
	}
}

void EquipmentInventory::EraseItem(int index)
{
	Inventory::EraseItem(index);
}

