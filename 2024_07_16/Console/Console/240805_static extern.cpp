#include <iostream>

using namespace std;

#pragma region static extern
/*
static

static
����: ������ ������ ���� �������� ���ü��� �����ϴ�.
 �����ֱ�: ���α׷��� ����� ������ ������ �����˴ϴ�.
 ��� ����:
  ���� ����: �Լ� ���� ���� ������ �Լ� ȣ�� ���� ���� �����մϴ�.
  ���� �Լ�: ���� �Լ��� ����� ���� �������� ������ �� �ֽ��ϴ�.
extern
 ����: ���� ���Ͽ��� ������ ������ �� �ְ� �մϴ�.
 ��� ����:
  �ܺ� ����: �ٸ� ���Ͽ� ���ǵ� ���� ������ �����մϴ�.
  �ܺ� �Լ�: �ٸ� ���Ͽ� ���ǵ� �Լ��� �����մϴ�.


Ŭ���� ������ static
Ŭ������ �ο��� ����ƽ����� ������ �ش�Ŭ������ ��� �ν��Ͻ����� ����
�ν��Ͻ� ���� �������� ���Ǵ� ����
*/
#pragma endregion

//��������
int num1 = 3;
int num2 = 4;

//���� ��������
static int staticgrobalvariable = 100;
 
void count();

class Character {

private:
	static int staticVar; // static ���� ����

public:
	Character()
	{
		staticVar++;
	}

	void increment()
	{
		staticVar++;
	}

	static void printStaticVar()
	{
		// ����ƽ ����Լ������� ����ƽ ��������� ȣ���� �����ϴ�...
		cout << "Static Variable: " << staticVar << endl;
	}
};

int Character::staticVar = 0;

int main()
{
	count();
	count();
	count();


	Character obj1;
	Character obj2;

	obj1.increment();
	obj2.increment();

	Character::printStaticVar();
	obj1.printStaticVar();
	obj2.printStaticVar();
}

void count()
{
	static int x = 0; //��������
	int y = 0; // ��������
	x = x + 1;
	y = y + 1;

	cout << "x�� : " << x << " y�� : " << y << endl;
}
