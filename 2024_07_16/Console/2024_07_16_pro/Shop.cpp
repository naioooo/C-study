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
		cout << "������ ���� �������� �����ϴ�" << endl;
		return;
	}

	cout << "===============����===============" << endl;
	for (int i = 0; i < items.size(); i++)
	{
		cout <<  i + 1 << "�� " << items[i].first->GetName() << " : " << items[i].first->GetPrice() << "�� " << items[i].second << "�� ";
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
