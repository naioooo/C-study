#include <iostream>

using namespace std;

#pragma region 상속
/*
부모 -> 자식
클래스 간의 상속 관계를 가질 때는 공통의 기능을 상위 클래스에 묶는다
공통의 기능을 다른 클래스로 확장할 수 있게 하는 것이 목적

만약 클래스들이 비슷한 코드를 가지고 있다면 
해당 코드를 상위클래스로 묶는 것이 좋다

player 
 이름 공격력 방어력
 공격하기 스킬 도망 등등 행동
monster
 공통된 이름 공격력 방어력
 상위클래스로 묶어 정리


접근 지정자 요약
 public 상속: 기본 클래스의 public 멤버는 public, protected 멤버는 protected로 상속.
 protected 상속: 기본 클래스의 public 멤버와 protected 멤버는 모두 protected로 상속.
 private 상속: 기본 클래스의 public 멤버와 protected 멤버는 모두 private로 상속.
*/
#pragma endregion

class Parent
{
public:
	int publicvalue;

	Parent() : publicvalue(1), privatevalue(2), protectedvalue(3) {};
	
	void ShowValue()
	{
		cout << "부모클래스 publicvalue : " << publicvalue  <<endl;
		cout << "부모클래스 privatevalue : " << privatevalue <<endl;
		cout << "부모클래스 protectedvalue : " << protectedvalue <<endl;
	}

private:
	int privatevalue;
protected:
	int protectedvalue;

};

class Child : protected Parent
{
public:
	void ShowValue()
	{
		cout << "부모클래스 publicvalue : " << publicvalue << endl;
		//cout << "부모클래스 privatevalue : " << privatevalue << endl;
		cout << "부모클래스 protectedvalue : " << protectedvalue << endl;
	}
};

class C_Warrior
{
	string name;
	int health;

public:
	C_Warrior(const string& n, const int h) : name(n), health(h) {}

	void Attack()
	{
		cout << name << "이 공격한다" << endl;
	}
	void TakeDamage(const int damage)
	{
		health -= damage;
		cout << name << "이 " << damage << "만큼 데미지를 입었다" << endl;
		cout << "남은 체력 :  " << health << endl;
	}
};

class C_Mage
{
	string name;
	int health;

public:
	C_Mage(const string& n, const int h) : name(n), health(h) {}

	void Attack()
	{
		cout << name << "이 공격한다" << endl;
	}
	void TakeDamage(const int damage)
	{
		health -= damage;
		cout << name << "이 " << damage << "만큼 데미지를 입었다" << endl;
		cout << "남은 체력 :  " << health << endl;
	}
};

// 상속을 쓴다면...

class Character
{
	string name;
	int health;

public:
	Character(const string& n, const int h) : name(n), health(h) {}

	void Attack()
	{
		cout << name << "이 공격한다" << endl;
	}
	void TakeDamage(const int damage)
	{
		health -= damage;
		cout << name << "이 " << damage << "만큼 데미지를 입었다" << endl;
		cout << "남은 체력 :  " << health << endl;
	}
	string GetName()
	{
		return name;
	}
};

class C_Warrior : public Character
{
public:
	// 자식클래스 생성자 호출 전에 부모클래스의 생성자를 호출한다
	C_Warrior(const string& n, const int h) : Character(n, h){}
	void Attack()
	{
		cout << GetName() << "이 칼로 공격한다" << endl;
	}
};

class C_Mage : public Character
{
public:
	C_Mage(const string& n, const int h) : Character(n, h) {}
	void Attack()
	{
		cout << GetName() << "이 마법 공격한다" << endl;
	}
};



int main()
{
	Child c;
	
	C_Warrior* warrior = new C_Warrior("전사", 100);
	warrior->Attack();
	warrior->TakeDamage(10);
	
}