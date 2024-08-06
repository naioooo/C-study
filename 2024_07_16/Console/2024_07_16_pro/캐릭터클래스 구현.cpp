#pragma once
#include "Adventurer.h"
#include "Warrior.h"
#include "Mage.h"
#include "Archer.h"
#include "Thief.h"

/*
추상클래스를 이용해서 활용한 세가지 캐릭터 클래스 구현
기본 스탯 움직임 공격함수 데미지 함수 등등
*/

int main()
{
	vector<Adventurer*> Adventurers;

	//업캐스팅
	Adventurers.push_back(new Warrior("전사", 200, 50, 4, 4, 0, 100));
	Adventurers.push_back(new Mage("마법사", 4, 4, 200, 50, 0, 100));
	Adventurers.push_back(new Archer("궁수", 50, 200, 4, 4, 0, 100));
	Adventurers.push_back(new Thief("도적", 4, 50, 4, 200, 0, 100));
		
	cout << endl;
	cout << "업캐스팅으로 부모클래스의 벡터에 자식클래스들을 삽입 " << endl;
	for (const auto Adventurer : Adventurers)
	{
		Adventurer->ShowStats();
		Adventurer->Attack();
		Adventurer->Move();
		cout << endl;
	}
	cout << "다운 캐스팅으로 자식클래스 멤버함수 호출" << endl;
	cout << endl;
	//다운캐스팅으로 자식클래스 멤버함수 호출
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