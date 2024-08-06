#include "Mage.h"

Mage::Mage()
{
	cout << "마법사가 생성되었습니다" << endl;
}

Mage::Mage(const string& n, const int s, const int d, const int i, const int l, const int e, const int m)
	: Adventurer(n, s, d, i, l, e), mana(m)
{
	cout << "마법사가 생성되었습니다" << endl;
}

Mage::~Mage()
{
	cout << "마법사가 소멸되었습니다" << endl;
}

int Mage::GetMana()
{
	return mana;
}

void Mage::SetMana(const int m)
{
	mana = m;
}

void Mage::Move()
{
	cout << "마법사가 움직입니다" << endl;
}

void Mage::Attack()
{
	cout << "마법사가 마법을 씁니다" << endl;
}

void Mage::Fireball()
{
	cout << "마법사가 파이어볼 스킬을 사용했습니다" << endl;
}

void Mage::ShowStats()
{
	Adventurer::ShowStats();
	cout << "특수스탯 mana : " << mana << endl;
	cout << endl;
}
