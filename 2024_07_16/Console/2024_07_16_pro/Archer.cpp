#include "Archer.h"

Archer::Archer()
{
	cout << "�ü��� �����Ǿ����ϴ�" << endl;
}

Archer::Archer(const string& n, const int s, const int d, const int i, const int l, const int e, const int acc)
	: Adventurer(n, s, d, i, l, e), accuracy(acc)
{
	cout << "�ü��� �����Ǿ����ϴ�" << endl;
}

Archer::~Archer()
{
	cout << "�ü��� �Ҹ�Ǿ����ϴ�" << endl;
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
	cout << "�ü��� �����Դϴ� " << endl;
}

void Archer::Attack()
{
	cout << "�ü��� Ȱ�� ���ϴ� " << endl;
}

void Archer::Snipe()
{
	cout << "�ü��� ���� ��ų�� ����߽��ϴ� " << endl;
}

void Archer::ShowStats()
{
	Adventurer::ShowStats();
	cout << "Ư������ accuracy : " << accuracy << endl;
	cout << endl;
}