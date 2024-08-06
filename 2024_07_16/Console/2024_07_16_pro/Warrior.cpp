#include "Warrior.h"

Warrior::Warrior()
{
    cout << "전사가 생성되었습니다" << endl;
}

Warrior::Warrior(const string& n, const int s, const int d, const int i, const int l, const int e, const int def)
    : Adventurer(n, s, d, i, l, e), defense(def)
{
    cout << "전사가 생성되었습니다" << endl;
}

Warrior::~Warrior()
{
    cout << "전사가 소멸되었습니다" << endl;
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
    cout << "전사가 움직입니다 " << endl;
}

void Warrior::Attack()
{
    cout << "전사가 검을 휘두릅니다 " << endl;
}

void Warrior::Block()
{
    cout << "전사가 방패 스킬을 사용했습니다 " << endl;
}

void Warrior::ShowStats()
{
    Adventurer::ShowStats();

    cout << "특수스탯 defense : " << defense << endl;
    cout << endl;
}
