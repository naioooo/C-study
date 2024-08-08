#include "ItemInventory.h"

ItemInventory::ItemInventory()
{
}

ItemInventory::~ItemInventory()
{
}

void ItemInventory::PrintItems()
{
	if (items.empty())
	{
		cout << "�÷��̾��� �������� �����ϴ�" << endl;
		return;
	}

	cout << "===========���� �κ��丮===========" << endl;
	for (int i = 0; i < items.size(); i++)
	{
		cout << i + 1 << "�� " << items[i].first->GetName() << " : " << items[i].first->GetPrice() << "�� " << items[i].second << "�� ";
		if (i % 3 == 2)
			cout << endl;
	}
	cout << endl;
	cout << "==================================" << endl;
}

void ItemInventory::InsertItem(Item*& insert)
{
	Inventory::InsertItem(insert);
}

void ItemInventory::EraseItem(int index)
{
	Inventory::EraseItem(index);
}
