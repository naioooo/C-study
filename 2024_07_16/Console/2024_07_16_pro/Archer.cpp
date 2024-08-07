#include "Archer.h"

Archer::Archer()
{
	cout << "�ü��� �����Ǿ����ϴ�" << endl;
}

Archer::Archer(const string& n, const int s, const int d, const int i, const int l, const int h)
	: Adventurer(n, s, d, i, l, h)
{
	cout << "�ü��� �����Ǿ����ϴ�" << endl;
}

Archer::~Archer()
{
	cout << "�ü��� �Ҹ�Ǿ����ϴ�" << endl;
}


void Archer::Move()
{
	cout << "�ü��� �����Դϴ� " << endl;
}

int Archer::Attack()
{
	cout << GetName() << "�� Ȱ�� ���ϴ� " << endl;
	int damage = GetDEX() + (GetSTR() * 0.1) + (rand() % 100 - 50);
	return damage;
}

int Archer::Skill()
{
	cout << GetName() << "�� ���� ��ų�� ����߽��ϴ� " << endl;
	int damage = GetDEX() + (GetSTR() * 0.1) + (rand() % 100 - 50);
	return damage * 2;
}

void Archer::ShowStats()
{
	cout << "���� : �ü� ";
	Adventurer::ShowStats();
	cout << endl;
}