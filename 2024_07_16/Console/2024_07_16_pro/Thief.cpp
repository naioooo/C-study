#include "Thief.h"

Thief::Thief()
{
	cout << "������ �����Ǿ����ϴ�" << endl;
}

Thief::Thief(const string& n, const int s, const int d, const int i, const int l, const int e, const int agi)
	: Adventurer(n, s, d, i, l, e), agility(agi)
{
	cout << "������ �����Ǿ����ϴ�" << endl;
}

Thief::~Thief()
{
	cout << "������ �Ҹ�Ǿ����ϴ�" << endl;
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
	cout << "������ �����Դϴ�" << endl;
}

void Thief::Attack()
{
	cout << "������ ǥâ�� �����ϴ�" << endl;
}

void Thief::Steal()
{
	cout << "������ ��ƿ ��ų�� ����߽��ϴ�" << endl;
}

void Thief::ShowStats()
{
	Adventurer::ShowStats();
	cout << "Ư������ agility : " << agility << endl;
	cout << endl;
}
