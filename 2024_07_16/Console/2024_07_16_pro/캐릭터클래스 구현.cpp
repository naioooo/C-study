#pragma once
#include "Adventurer.h"
#include "Warrior.h"
#include "Mage.h"
#include "Archer.h"
#include "Thief.h"

/*
�߻�Ŭ������ �̿��ؼ� Ȱ���� ������ ĳ���� Ŭ���� ����
�⺻ ���� ������ �����Լ� ������ �Լ� ���
*/

int main()
{
	vector<Adventurer*> Adventurers;

	//��ĳ����
	Adventurers.push_back(new Warrior("����", 200, 50, 4, 4, 0, 100));
	Adventurers.push_back(new Mage("������", 4, 4, 200, 50, 0, 100));
	Adventurers.push_back(new Archer("�ü�", 50, 200, 4, 4, 0, 100));
	Adventurers.push_back(new Thief("����", 4, 50, 4, 200, 0, 100));
		
	cout << endl;
	cout << "��ĳ�������� �θ�Ŭ������ ���Ϳ� �ڽ�Ŭ�������� ���� " << endl;
	for (const auto Adventurer : Adventurers)
	{
		Adventurer->ShowStats();
		Adventurer->Attack();
		Adventurer->Move();
		cout << endl;
	}
	cout << "�ٿ� ĳ�������� �ڽ�Ŭ���� ����Լ� ȣ��" << endl;
	cout << endl;
	//�ٿ�ĳ�������� �ڽ�Ŭ���� ����Լ� ȣ��
	dynamic_cast<Warrior*>(Adventurers[0])->Block();
	dynamic_cast<Mage*>(Adventurers[1])->Fireball();
	dynamic_cast<Archer*>(Adventurers[2])->Snipe();
	dynamic_cast<Thief*>(Adventurers[3])->Steal();
	cout << endl;

	for (auto Adventurer : Adventurers)
	{
		delete Adventurer;
	}

	return 0;
}