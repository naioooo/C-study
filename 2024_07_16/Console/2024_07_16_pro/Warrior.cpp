#include "Warrior.h"

Warrior::Warrior()
{
    cout << "���簡 �����Ǿ����ϴ�" << endl;
}

Warrior::Warrior(const string& n, const int s, const int d, const int i, const int l, const int h)
    : Adventurer(n, s, d, i, l, h)
{
    cout << "���簡 �����Ǿ����ϴ�" << endl;
}

Warrior::~Warrior()
{
    cout << "���簡 �Ҹ�Ǿ����ϴ�" << endl;
}

void Warrior::Move()
{
    cout << "���簡 �����Դϴ� " << endl;
}

int Warrior::Attack()
{
    cout << GetName() << "���簡 ���� �ֵθ��ϴ� " << endl;
    int damage = GetSTR() + (GetDEX() * 0.1) + (rand() % 100 - 50);
    return damage;
}

int Warrior::Skill()
{
    cout << GetName() <<"�� �Ŀ���Ʈ����ũ ��ų�� ����߽��ϴ� " << endl;
    int damage = GetSTR() + (GetDEX() * 0.1) + (rand() % 100 - 50);
    return damage * 3;
}

void Warrior::ShowStats()
{
    cout << "���� : ���� ";
    Adventurer::ShowStats();
    cout << endl;
}
