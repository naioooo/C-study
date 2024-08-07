#include "Thief.h"

Thief::Thief()
{
	cout << "도적이 생성되었습니다" << endl;
}

Thief::Thief(const string& n, const int s, const int d, const int i, const int l, const int h)
	: Adventurer(n, s, d, i, l, h)
{
	cout << "도적이 생성되었습니다" << endl;
}

Thief::~Thief()
{
	cout << "도적이 소멸되었습니다" << endl;
}

void Thief::Move()
{
	cout << "도적이 움직입니다" << endl;
}

int Thief::Attack()
{
	cout << GetName() << "이 표창을 던집니다" << endl;
	int damage = GetLUK() + (GetDEX() * 0.1) + (rand() % 100 - 50);
	return damage;
}

int Thief::Skill()
{
	cout << GetName() << "이 럭키세븐 스킬을 사용했습니다" << endl;
	int damage = GetLUK() + (GetDEX() * 0.1) + (rand() % 100 - 50);
	return damage * 3;
}

void Thief::ShowStats()
{
	cout << "직업 : 도적 ";
	Adventurer::ShowStats();
	cout << endl;
}
