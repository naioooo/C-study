#include "Mage.h"

Mage::Mage()
{
	cout << "�����簡 �����Ǿ����ϴ�" << endl;
}

Mage::Mage(const string& n, const int s, const int d, const int i, const int l, const int e, const int m)
	: Adventurer(n, s, d, i, l, e), mana(m)
{
	cout << "�����簡 �����Ǿ����ϴ�" << endl;
}

Mage::~Mage()
{
	cout << "�����簡 �Ҹ�Ǿ����ϴ�" << endl;
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
	cout << "�����簡 �����Դϴ�" << endl;
}

void Mage::Attack()
{
	cout << "�����簡 ������ ���ϴ�" << endl;
}

void Mage::Fireball()
{
	cout << "�����簡 ���̾ ��ų�� ����߽��ϴ�" << endl;
}

void Mage::ShowStats()
{
	Adventurer::ShowStats();
	cout << "Ư������ mana : " << mana << endl;
	cout << endl;
}
