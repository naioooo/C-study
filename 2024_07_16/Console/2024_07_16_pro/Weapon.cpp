#include "Weapon.h"

Weapon::Weapon()
{
}

Weapon::Weapon(const string& n, const int p, const int a)
	:Item(n, p), attack(a)
{
}

Weapon::~Weapon()
{
}

int Weapon::GetAttack()
{
	return attack;
}

void Weapon::SetAttack(int a)
{
	attack = a;
}

void Weapon::PrintItem()
{
}
