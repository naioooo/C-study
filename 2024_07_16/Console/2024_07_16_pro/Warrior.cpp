#include "Warrior.h"

Warrior::Warrior()
{
    cout << "���簡 �����Ǿ����ϴ�" << endl;
}

Warrior::Warrior(const string& n, const int s, const int d, const int i, const int l, const int e, const int def)
    : Adventurer(n, s, d, i, l, e), defense(def)
{
    cout << "���簡 �����Ǿ����ϴ�" << endl;
}

Warrior::~Warrior()
{
    cout << "���簡 �Ҹ�Ǿ����ϴ�" << endl;
}

int Warrior::GetDEF()
{
    return defense;
}

void Warrior::SetDEF(const int d)
{
    defense = d;
}

void Warrior::Move()
{
    cout << "���簡 �����Դϴ� " << endl;
}

void Warrior::Attack()
{
    cout << "���簡 ���� �ֵθ��ϴ� " << endl;
}

void Warrior::Block()
{
    cout << "���簡 ���� ��ų�� ����߽��ϴ� " << endl;
}

void Warrior::ShowStats()
{
    Adventurer::ShowStats();

    cout << "Ư������ defense : " << defense << endl;
    cout << endl;
}
