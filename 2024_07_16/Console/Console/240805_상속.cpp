#include <iostream>

using namespace std;

#pragma region ���
/*
�θ� -> �ڽ�
Ŭ���� ���� ��� ���踦 ���� ���� ������ ����� ���� Ŭ������ ���´�
������ ����� �ٸ� Ŭ������ Ȯ���� �� �ְ� �ϴ� ���� ����

���� Ŭ�������� ����� �ڵ带 ������ �ִٸ� 
�ش� �ڵ带 ����Ŭ������ ���� ���� ����

player 
 �̸� ���ݷ� ����
 �����ϱ� ��ų ���� ��� �ൿ
monster
 ����� �̸� ���ݷ� ����
 ����Ŭ������ ���� ����


���� ������ ���
 public ���: �⺻ Ŭ������ public ����� public, protected ����� protected�� ���.
 protected ���: �⺻ Ŭ������ public ����� protected ����� ��� protected�� ���.
 private ���: �⺻ Ŭ������ public ����� protected ����� ��� private�� ���.
*/
#pragma endregion

class Parent
{
public:
	int publicvalue;

	Parent() : publicvalue(1), privatevalue(2), protectedvalue(3) {};
	
	void ShowValue()
	{
		cout << "�θ�Ŭ���� publicvalue : " << publicvalue  <<endl;
		cout << "�θ�Ŭ���� privatevalue : " << privatevalue <<endl;
		cout << "�θ�Ŭ���� protectedvalue : " << protectedvalue <<endl;
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
		cout << "�θ�Ŭ���� publicvalue : " << publicvalue << endl;
		//cout << "�θ�Ŭ���� privatevalue : " << privatevalue << endl;
		cout << "�θ�Ŭ���� protectedvalue : " << protectedvalue << endl;
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
		cout << name << "�� �����Ѵ�" << endl;
	}
	void TakeDamage(const int damage)
	{
		health -= damage;
		cout << name << "�� " << damage << "��ŭ �������� �Ծ���" << endl;
		cout << "���� ü�� :  " << health << endl;
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
		cout << name << "�� �����Ѵ�" << endl;
	}
	void TakeDamage(const int damage)
	{
		health -= damage;
		cout << name << "�� " << damage << "��ŭ �������� �Ծ���" << endl;
		cout << "���� ü�� :  " << health << endl;
	}
};

// ����� ���ٸ�...

class Character
{
	string name;
	int health;

public:
	Character(const string& n, const int h) : name(n), health(h) {}

	void Attack()
	{
		cout << name << "�� �����Ѵ�" << endl;
	}
	void TakeDamage(const int damage)
	{
		health -= damage;
		cout << name << "�� " << damage << "��ŭ �������� �Ծ���" << endl;
		cout << "���� ü�� :  " << health << endl;
	}
	string GetName()
	{
		return name;
	}
};

class C_Warrior : public Character
{
public:
	// �ڽ�Ŭ���� ������ ȣ�� ���� �θ�Ŭ������ �����ڸ� ȣ���Ѵ�
	C_Warrior(const string& n, const int h) : Character(n, h){}
	void Attack()
	{
		cout << GetName() << "�� Į�� �����Ѵ�" << endl;
	}
};

class C_Mage : public Character
{
public:
	C_Mage(const string& n, const int h) : Character(n, h) {}
	void Attack()
	{
		cout << GetName() << "�� ���� �����Ѵ�" << endl;
	}
};



int main()
{
	Child c;
	
	C_Warrior* warrior = new C_Warrior("����", 100);
	warrior->Attack();
	warrior->TakeDamage(10);
	
}