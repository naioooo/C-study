#include "Archer.h"

Archer::Archer()
{
	cout << "궁수가 생성되었습니다" << endl;
}

Archer::Archer(const string& n, const int s, const int d, const int i, const int l, const int e, const int acc)
	: Adventurer(n, s, d, i, l, e), accuracy(acc)
{
	cout << "궁수가 생성되었습니다" << endl;
}

Archer::~Archer()
{
	cout << "궁수가 소멸되었습니다" << endl;
}

int Archer::GetACC()
{
	return accuracy;
}

void Archer::SetACC(const int a)
{
	accuracy = a;
}

void Archer::Move()
{
	cout << "궁수가 움직입니다 " << endl;
}

void Archer::Attack()
{
	cout << "궁수가 활을 쏩니다 " << endl;
}

void Archer::Snipe()
{
	cout << "궁수가 저격 스킬을 사용했습니다 " << endl;
}

void Archer::ShowStats()
{
	Adventurer::ShowStats();
	cout << "특수스탯 accuracy : " << accuracy << endl;
	cout << endl;
}