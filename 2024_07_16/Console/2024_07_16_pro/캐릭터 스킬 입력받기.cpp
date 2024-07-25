#include <iostream>
#include <string>
#include <vector>

using namespace std;

/*
����

1. �Լ� �����ε��� Ȱ���� ĳ���� ��ų �����
 ex) ��ų �̸��� �Է¹޾� ����ϴ� �Լ�
 ��ų �̸��̶� ������ ���� �Է¹޾� ��ų�� ����ϴ� �Լ�
 ��ų �̸� ������ ũ��Ƽ��Ȯ��
 ��ų �̸� ������ ũ��Ƽ��Ȯ�� �ǰݰŸ�


*/

void skill(string name)
{
	cout << "��ų �̸��� " << name << "�Դϴ�" << endl;
}

void skill(string name, int damage)
{
	cout << "��ų �̸��� " << name << "�Դϴ�" << endl;
	cout << "�������� " << damage << "�Դϴ�" << endl;
}

void skill(string name, int damage, int critical)
{
	cout << "��ų �̸��� " << name << "�Դϴ�" << endl;
	cout << "�������� " << damage << "�Դϴ�" << endl;
	cout << "ũ��Ƽ��Ȯ���� " << critical << "�Դϴ�" << endl;
}

void skill(string name, int damage, int critical, int distance)
{
	cout << "��ų �̸��� " << name << "�Դϴ�" << endl;
	cout << "�������� " << damage << "�Դϴ�" << endl;
	cout << "ũ��Ƽ��Ȯ���� " << critical << "�Դϴ�" << endl;
	cout << "�ǰݰŸ��� " << distance << "�Դϴ�" << endl;
}

void example1()
{
	while (true)
	{
		int input = 0;

		string name;
		int damage = 0;
		int critical = 0;
		int distance = 0;

		while (true)
		{

			cout << "���ϴ� �� ������ �Է��Ͻÿ�" << endl;
			cout << "1 ~ 4����" << endl;

			cin >> input;

			if (input == 1 || input == 2 || input == 3 || input == 4)
			{
				break;
			}
			else
				cout << "�߸��Է��ϼ˽��ϴ�" << endl;
		}

		cout << endl;

		while (true)
		{			
			if (input == 1)
			{
				cout << "��ų �̸��� �Է��Ͻÿ�" << endl;
				cin >> name;

				cout << endl;
				skill(name);
			}
			else if (input == 2)
			{
				cout << "��ų �̸��� �Է��Ͻÿ�" << endl;
				cin >> name;
				cout << "�������� �Է��Ͻÿ�" << endl;
				cin >> damage;

				cout << endl;
				skill(name, damage);
			}
			else if (input == 3)
			{
				cout << "��ų �̸��� �Է��Ͻÿ�" << endl;
				cin >> name;
				cout << "�������� �Է��Ͻÿ�" << endl;
				cin >> damage;
				cout << "ũ��Ƽ�� Ȯ���� �Է��Ͻÿ�" << endl;
				cin >> critical;

				cout << endl;
				skill(name, damage, critical);
			}
			else if (input == 4)
			{
				cout << "��ų �̸��� �Է��Ͻÿ�" << endl;
				cin >> name;
				cout << "�������� �Է��Ͻÿ�" << endl;
				cin >> damage;
				cout << "ũ��Ƽ�� Ȯ���� �Է��Ͻÿ�" << endl;
				cin >> critical;
				cout << "�ǰݰŸ��� �Է��Ͻÿ�" << endl;
				cin >> distance;

				cout << endl;
				skill(name, damage, critical, distance);
			}
		}

		cout << endl;
		cout << endl;
	}
}


/*
 2. ����ڰ� �Է��� ���� ������ �� �ڸ����� ���� ���ϴ� ������ �����ض�
  18324 = 1 + 8 + 3 + 2 + 4 =18
*/

void example2()
{
	string numbers;
	int input = 0;
	int sum = 0;

	while (true)
	{
		cout << " ���Ͻô� ���� ������ �Է��Ͻÿ�" << endl;
		cin >> input;

		if (input > 0)
			break;
		else
			cout << " �߸� �Է��ϼ̽��ϴ�" << endl;
	}

	numbers = to_string(input);

	for (auto number : numbers)
	{
		sum += number - '0';
	}

	cout << numbers << "�� �� �ڸ����� �� ���� " << sum << "�Դϴ�" << endl;
}


int main()
{

	example1();
	//example2();
	
	return 0;
}