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
		cout << "����� �������� �����ϴ�" << endl;
		return;
	}

	cout << "===========���� ���â===========" << endl;
	for (int i = 0; i < items.size(); i++)
	{
		cout << i + 1 << "�� " << items[i].first->GetName() << " : " << items[i].second << "�� ";
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

