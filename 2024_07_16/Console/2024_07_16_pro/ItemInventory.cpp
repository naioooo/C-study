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
		cout << "플레이어의 아이템이 없습니다" << endl;
		return;
	}

	cout << "===========나의 인벤토리===========" << endl;
	for (int i = 0; i < items.size(); i++)
	{
		cout << i + 1 << "번 " << items[i].first->GetName() << " : " << items[i].first->GetPrice() << "원 " << items[i].second << "개 ";
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
