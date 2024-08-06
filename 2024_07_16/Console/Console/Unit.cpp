#include "Unit.h"

Unit::Unit()
{
}

Unit::Unit(const string& n, const int h)
	: name(n), health(h)
{
	cout << " 부모 클래스 생성자 호출 " << endl;
}

Unit::~Unit()
{
	cout << " 부모 클래스 소멸자 호출 " << endl;
}

void Unit::TakeDamage(const int damage)
{
	health -= damage;
	cout << name << "이 " << damage << "만큼 피해를 입었다" << endl;
	cout << "남은 체력은 : " << health << endl;
}
