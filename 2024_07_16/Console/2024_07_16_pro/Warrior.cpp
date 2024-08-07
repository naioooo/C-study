#include "Warrior.h"

Warrior::Warrior()
{
    cout << "전사가 생성되었습니다" << endl;
}

Warrior::Warrior(const string& n, const int s, const int d, const int i, const int l, const int h)
    : Adventurer(n, s, d, i, l, h)
{
    cout << "전사가 생성되었습니다" << endl;
}

Warrior::~Warrior()
{
    cout << "전사가 소멸되었습니다" << endl;
}

void Warrior::Move()
{
    cout << "전사가 움직입니다 " << endl;
}

int Warrior::Attack()
{
    cout << GetName() << "전사가 검을 휘두릅니다 " << endl;
    int damage = GetSTR() + (GetDEX() * 0.1) + (rand() % 100 - 50);
    return damage;
}

int Warrior::Skill()
{
    cout << GetName() <<"가 파워스트라이크 스킬을 사용했습니다 " << endl;
    int damage = GetSTR() + (GetDEX() * 0.1) + (rand() % 100 - 50);
    return damage * 3;
}

void Warrior::ShowStats()
{
    cout << "직업 : 전사 ";
    Adventurer::ShowStats();
    cout << endl;
}
