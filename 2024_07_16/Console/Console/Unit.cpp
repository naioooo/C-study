#include "Unit.h"

Unit::Unit()
{
}

Unit::Unit(const string& n, const int h)
	: name(n), health(h)
{
	cout << " �θ� Ŭ���� ������ ȣ�� " << endl;
}

Unit::~Unit()
{
	cout << " �θ� Ŭ���� �Ҹ��� ȣ�� " << endl;
}

void Unit::TakeDamage(const int damage)
{
	health -= damage;
	cout << name << "�� " << damage << "��ŭ ���ظ� �Ծ���" << endl;
	cout << "���� ü���� : " << health << endl;
}
