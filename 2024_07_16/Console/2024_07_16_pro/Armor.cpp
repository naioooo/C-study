#include "Armor.h"

Armor::Armor()
{
}

Armor::Armor(const string& n, const int p, const int d)
	:Item(n, p), defense(d)
{
}

Armor::~Armor()
{
}

int Armor::GetDefense()
{
	return defense;
}

void Armor::SetDefense(int d)
{
	defense = d;
}

void Armor::PrintItem()
{
}
