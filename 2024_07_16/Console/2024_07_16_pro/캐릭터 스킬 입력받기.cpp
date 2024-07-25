#include <iostream>
#include <string>
#include <vector>

using namespace std;

/*
과제

1. 함수 오버로딩을 활용한 캐릭터 스킬 만들기
 ex) 스킬 이름만 입력받아 사용하는 함수
 스킬 이름이랑 데이지 값을 입력받아 스킬을 사용하는 함수
 스킬 이름 데미지 크리티컬확률
 스킬 이름 데미지 크리티컬확률 피격거리


*/

void skill(string name)
{
	cout << "스킬 이름은 " << name << "입니다" << endl;
}

void skill(string name, int damage)
{
	cout << "스킬 이름은 " << name << "입니다" << endl;
	cout << "데미지는 " << damage << "입니다" << endl;
}

void skill(string name, int damage, int critical)
{
	cout << "스킬 이름은 " << name << "입니다" << endl;
	cout << "데미지는 " << damage << "입니다" << endl;
	cout << "크리티컬확률은 " << critical << "입니다" << endl;
}

void skill(string name, int damage, int critical, int distance)
{
	cout << "스킬 이름은 " << name << "입니다" << endl;
	cout << "데미지는 " << damage << "입니다" << endl;
	cout << "크리티컬확률은 " << critical << "입니다" << endl;
	cout << "피격거리는 " << distance << "입니다" << endl;
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

			cout << "원하는 값 종류을 입력하시오" << endl;
			cout << "1 ~ 4가지" << endl;

			cin >> input;

			if (input == 1 || input == 2 || input == 3 || input == 4)
			{
				break;
			}
			else
				cout << "잘못입력하셧습니다" << endl;
		}

		cout << endl;

		while (true)
		{			
			if (input == 1)
			{
				cout << "스킬 이름을 입력하시오" << endl;
				cin >> name;

				cout << endl;
				skill(name);
			}
			else if (input == 2)
			{
				cout << "스킬 이름을 입력하시오" << endl;
				cin >> name;
				cout << "데미지를 입력하시오" << endl;
				cin >> damage;

				cout << endl;
				skill(name, damage);
			}
			else if (input == 3)
			{
				cout << "스킬 이름을 입력하시오" << endl;
				cin >> name;
				cout << "데미지를 입력하시오" << endl;
				cin >> damage;
				cout << "크리티컬 확률를 입력하시오" << endl;
				cin >> critical;

				cout << endl;
				skill(name, damage, critical);
			}
			else if (input == 4)
			{
				cout << "스킬 이름을 입력하시오" << endl;
				cin >> name;
				cout << "데미지를 입력하시오" << endl;
				cin >> damage;
				cout << "크리티컬 확률를 입력하시오" << endl;
				cin >> critical;
				cout << "피격거리를 입력하시오" << endl;
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
 2. 사용자가 입력한 양의 정수의 각 자릿수의 합을 구하는 로직을 구현해라
  18324 = 1 + 8 + 3 + 2 + 4 =18
*/

void example2()
{
	string numbers;
	int input = 0;
	int sum = 0;

	while (true)
	{
		cout << " 원하시는 양의 정수를 입력하시오" << endl;
		cin >> input;

		if (input > 0)
			break;
		else
			cout << " 잘못 입력하셨습니다" << endl;
	}

	numbers = to_string(input);

	for (auto number : numbers)
	{
		sum += number - '0';
	}

	cout << numbers << "의 각 자릿수의 총 합은 " << sum << "입니다" << endl;
}


int main()
{

	example1();
	//example2();
	
	return 0;
}