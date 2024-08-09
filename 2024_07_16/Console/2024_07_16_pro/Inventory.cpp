#include "Inventory.h"

Inventory::Inventory()
{
}

Inventory::Inventory(const vector<pair<Item*, int>> i)
{
}

Inventory::~Inventory()
{
	for (auto& item : items)
	{
		delete item.first;
		item.first = nullptr;
	}
}

vector<pair<Item*, int>>& Inventory::GetItems()
{
    return items;
}

void Inventory::SetItems(const vector<pair<Item*, int>>& i)
{
    items = i;
}

void Inventory::InsertItem(Item*& insert)
{
	bool check = false;

	for (auto& item : items)
	{
		if (item.first->GetName() == insert->GetName())
		{
			item.second++;
			check = true;
			break;
		}
	}

	if (!check)
	{
		items.emplace_back(insert, 1);
	}
}

void Inventory::EraseItem(int index)
{
	if (items[index].second <= 1)
	{
		items.erase(items.begin() + index);
	}
	else
	{
		items[index].second--;
	}
}

bool Inventory::CheckItem(Item*& insert)
{
	for (auto& item : items)
	{
		if (item.first->GetName() == insert->GetName())
		{
			cout << "동일한 아이템이 있습니다" << endl;
			return true;
		}
	}

	return false;
}

void Inventory::PrintItems()
{
}
