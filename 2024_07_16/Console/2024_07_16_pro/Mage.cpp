#include "Mage.h"

Mage::Mage()
{
	cout << "마법사가 생성되었습니다" << endl;
}

Mage::Mage(const string& n, const int s, const int d, const int i, const int l, const int h)
	: Adventurer(n, s, d, i, l, h)
{
	cout << "마법사가 생성되었습니다" << endl;
}

Mage::~Mage()
{
	cout << "마법사가 소멸되었습니다" << endl;
}

void Mage::Move()
{
	cout << "마법사가 움직입니다" << endl;
}

int Mage::Attack()
{
	cout << GetName() << "가 마법을 씁니다" << endl;
	int damage = GetINT() + (GetLUK() * 0.1) + (rand() % 100 - 50);
	return damage;
}

int Mage::Skill()
{
	cout << GetName() << "가 파이어볼 스킬을 사용했습니다" << endl;
	int damage = GetINT() + (GetLUK() * 0.1) + (rand() % 100 - 50);
	return damage * 3;
}

void Mage::ShowStats()
{
	cout << "직업 : 마법사 ";
	Adventurer::ShowStats();
	cout << endl;
}
