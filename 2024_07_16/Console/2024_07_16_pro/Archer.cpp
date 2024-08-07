#include "Archer.h"

Archer::Archer()
{
	cout << "궁수가 생성되었습니다" << endl;
}

Archer::Archer(const string& n, const int s, const int d, const int i, const int l, const int h)
	: Adventurer(n, s, d, i, l, h)
{
	cout << "궁수가 생성되었습니다" << endl;
}

Archer::~Archer()
{
	cout << "궁수가 소멸되었습니다" << endl;
}


void Archer::Move()
{
	cout << "궁수가 움직입니다 " << endl;
}

int Archer::Attack()
{
	cout << GetName() << "가 활을 쏩니다 " << endl;
	int damage = GetDEX() + (GetSTR() * 0.1) + (rand() % 100 - 50);
	return damage;
}

int Archer::Skill()
{
	cout << GetName() << "가 저격 스킬을 사용했습니다 " << endl;
	int damage = GetDEX() + (GetSTR() * 0.1) + (rand() % 100 - 50);
	return damage * 2;
}

void Archer::ShowStats()
{
	cout << "직업 : 궁수 ";
	Adventurer::ShowStats();
	cout << endl;
}