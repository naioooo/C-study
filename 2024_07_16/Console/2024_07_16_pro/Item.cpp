#include "Item.h"

Item::Item()
{
}

Item::Item(const string& n, const int p) : name(n), price(p)
{
}

string Item::GetName()
{
	return name;
}

int Item::GetPrice()
{
	return price;
}

void Item::SetName(const string& n)
{
	name = n;
}

void Item::SetPrice(const int p)
{
	price = p;
}

void Item::PrintItem()
{
}
