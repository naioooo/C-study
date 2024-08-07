#include "Mage.h"

Mage::Mage()
{
	cout << "�����簡 �����Ǿ����ϴ�" << endl;
}

Mage::Mage(const string& n, const int s, const int d, const int i, const int l, const int h)
	: Adventurer(n, s, d, i, l, h)
{
	cout << "�����簡 �����Ǿ����ϴ�" << endl;
}

Mage::~Mage()
{
	cout << "�����簡 �Ҹ�Ǿ����ϴ�" << endl;
}

void Mage::Move()
{
	cout << "�����簡 �����Դϴ�" << endl;
}

int Mage::Attack()
{
	cout << GetName() << "�� ������ ���ϴ�" << endl;
	int damage = GetINT() + (GetLUK() * 0.1) + (rand() % 100 - 50);
	return damage;
}

int Mage::Skill()
{
	cout << GetName() << "�� ���̾ ��ų�� ����߽��ϴ�" << endl;
	int damage = GetINT() + (GetLUK() * 0.1) + (rand() % 100 - 50);
	return damage * 3;
}

void Mage::ShowStats()
{
	cout << "���� : ������ ";
	Adventurer::ShowStats();
	cout << endl;
}
