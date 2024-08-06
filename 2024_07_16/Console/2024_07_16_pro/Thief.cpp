#include "Thief.h"

Thief::Thief()
{
	cout << "도적이 생성되었습니다" << endl;
}

Thief::Thief(const string& n, const int s, const int d, const int i, const int l, const int e, const int agi)
	: Adventurer(n, s, d, i, l, e), agility(agi)
{
	cout << "도적이 생성되었습니다" << endl;
}

Thief::~Thief()
{
	cout << "도적이 소멸되었습니다" << endl;
}

int Thief::GetAGI()
{
	return agility;
}

void Thief::SetAGI(const int a)
{
	agility = a;
}

void Thief::Move()
{
	cout << "도적이 움직입니다" << endl;
}

void Thief::Attack()
{
	cout << "도적이 표창을 던집니다" << endl;
}

void Thief::Steal()
{
	cout << "도적이 스틸 스킬을 사용했습니다" << endl;
}

void Thief::ShowStats()
{
	Adventurer::ShowStats();
	cout << "특수스탯 agility : " << agility << endl;
	cout << endl;
}
