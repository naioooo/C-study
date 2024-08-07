#include "Thief.h"

Thief::Thief()
{
	cout << "������ �����Ǿ����ϴ�" << endl;
}

Thief::Thief(const string& n, const int s, const int d, const int i, const int l, const int h)
	: Adventurer(n, s, d, i, l, h)
{
	cout << "������ �����Ǿ����ϴ�" << endl;
}

Thief::~Thief()
{
	cout << "������ �Ҹ�Ǿ����ϴ�" << endl;
}

void Thief::Move()
{
	cout << "������ �����Դϴ�" << endl;
}

int Thief::Attack()
{
	cout << GetName() << "�� ǥâ�� �����ϴ�" << endl;
	int damage = GetLUK() + (GetDEX() * 0.1) + (rand() % 100 - 50);
	return damage;
}

int Thief::Skill()
{
	cout << GetName() << "�� ��Ű���� ��ų�� ����߽��ϴ�" << endl;
	int damage = GetLUK() + (GetDEX() * 0.1) + (rand() % 100 - 50);
	return damage * 3;
}

void Thief::ShowStats()
{
	cout << "���� : ���� ";
	Adventurer::ShowStats();
	cout << endl;
}
