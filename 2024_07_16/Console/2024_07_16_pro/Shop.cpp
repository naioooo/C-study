#include "Shop.h"

Shop::Shop()
{
}

Shop::~Shop()
{
}

void Shop::PrintItems()
{
	if (items.empty())
	{
		cout << "상점에 남은 아이템이 없습니다" << endl;
		return;
	}

	cout << "===============상점===============" << endl;
	for (int i = 0; i < items.size(); i++)
	{
		cout <<  i + 1 << "번 " << items[i].first->GetName() << " : " << items[i].first->GetPrice() << "원 " << items[i].second << "개 ";
		if (i % 3 == 2)
			cout << endl;
	}
	cout << endl;
	cout << "==================================" << endl;
}

void Shop::InsertItem(Item*& insert)
{
	Inventory::InsertItem(insert);
}

void Shop::EraseItem(int index)
{
	Inventory::EraseItem(index);
}
