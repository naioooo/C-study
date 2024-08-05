#include <iostream>
#include <string>
#include <cmath>

using namespace std;

enum DAY
{
	SUN,
	MON,
	TUE,
	WEN,
	THU,
	FRI,
	SAT
};

#pragma region 객관식
/*

문제 

1번
1. for (초기화; 조건; 증가){}

2번
2. if(조건) {}

3번
3. 30

4번
4. continue

5번
1. else
*/
#pragma endregion

void ex1();
void ex2();
void ex3();
void ex4();
void ex5();
void ex6();
void ex7();
void ex8();

int main()
{
	ex1();
	ex2();
	ex3();
	ex4();
	ex5();
	ex6();
	ex7();
	ex8();
}

void ex1()
{
	cout << "ex1 ===============================" << endl;
	int a = 32 >> 1; 
	int b = a >> 3;

	cout << a << endl; // 16
	cout << " a는 비트 연산자로 32를 2진수로 풀면 100000이고 >> 1 이면 한칸씩 당겨지므로 010000 = 즉 16이다 " << endl;
	cout << b << endl; // 2
	cout << " b도 마찬가지로 16의 이진수인 10000에서 3칸이 당겨지므로 이진수로 00010이며 십진수로 2가 된다  " << endl;
	cout << endl;
}

void ex2()
{
	cout << "ex2 ===============================" << endl;

	int input = 0;
	bool check = false;
	cout << "소수인지 판별할 숫자를 입력하시오" << endl;
	cin >> input;

	for (int i = 2; i <= sqrt(input); i++)
	{
		if (input % i == 0)
		{
			check = true;
			break;
		}
	}

	if (check)
	{
		cout << input << "은 소수가 아닙니다 " << endl;
	}
	else
	{
		cout << input << "은 소수입니다 " << endl;
	}
	cout << endl;
}

void ex3()
{
	cout << "ex3 ===============================" << endl;

	int input1 = 0;
	int input2 = 0;
	int sum = 0;

	cout << "첫번째 숫자를 입력하시오" << endl;
	cin >> input1;
	cout << "두번째 숫자를 입력하시오" << endl;
	cin >> input2;

	if (input1 < input2)
	{
		for (int i = input1; i <= input2; i++)
		{
			sum += i;
		}
	}
	else
	{
		for (int i = input2; i <= input1; i++)
		{
			sum += i;
		}
	}

	cout << "두 수의 구간의 합은 " << sum << "입니다" << endl;
	cout << endl;
}

void ex4()
{
	cout << "ex4 ===============================" << endl;

	int arr[10];

	for (int i = 0; i < 10; i++)
	{
		arr[i] = i + 1;
		cout << arr[i] << " ";
	}
	cout << endl;
	cout << "이 배열에서 1부터 10중 짝수만 출력한다면" << endl;

	for (int i = 1; i < 10; i += 2)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	cout << endl;
}

void ex5()
{
	cout << "ex5 ===============================" << endl;
	int input = 0;
	cout << "2진수로 변환할 숫자를 입력하시오" << endl;
	cin >> input;

	string binary;

	while (true)
	{
		if (input == 0)
			break;

		int tmp = input % 2;
		input /= 2;

		binary = to_string(tmp) + binary;		
	}

	cout << input << "을 2진수로 표현하면 " << binary << "입니다" << endl;
	cout << endl;
}

void ex6()
{
	cout << "ex6 ===============================" << endl;
	string input = "안녕 난 지옥에서온 루시퍼 라고 해";
	int cnt = 0;
	cout << input << endl;
	

	for (int i = 0; i < input.size(); i++)
	{
		if (input[i] == ' ') // 공백으로 단어 수 체크
			cnt++;
	}
	cnt++; // 문장이 끝나면 마지막 단어 수 추가

	cout << "이 문장의 단어 수는 " << cnt << "개 입니다" << endl;
	cout << endl;
}

void ex7()
{
	cout << "ex7 ===============================" << endl;
	int arr1[] = { 1, 5, 5, 10 };
	int arr2[] = { 3, 4, 5, 5, 10 };
	int arr3[] = { 5, 5, 10, 20 };

	cout << "arr1 : ";
	for (int i = 0; i < 4; i++)
	{
		cout << arr1[i] << " ";
	}
	cout << endl;
	cout << "arr2 : ";
	for (int i = 0; i < 5; i++)
	{
		cout << arr2[i] << " ";
	}
	cout << endl;
	cout << "arr3 : ";
	for (int i = 0; i < 4; i++)
	{
		cout << arr3[i] << " ";
	}
	cout << endl;

	int dul_arr1[10] = {0, };
	int dul_arr2[10] = {0, };
	int cnt = 0;

	// arr1과 arr2 비교
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (arr1[i] == arr2[j])
			{
				dul_arr1[cnt++] = arr1[i];
				break;
			}
		}
	}

	// 중복된 숫자 제거
	for (int i = 0; i < 10; i++)
	{
		if (dul_arr1[i])
		{
			for (int j = i + 1; j < 10; j++)
			{
				if (dul_arr1[i] == dul_arr1[j])
				{
					dul_arr1[i] = 0;
				}
			}
		}
	}

	cnt = 0;
	// arr1과 arr2가 중복한 배열과 arr3과 비교
	for (int i = 0; i < 10; i++)
	{
		if (dul_arr1[i])
		{
			for (int j = 0; j < 4; j++)
			{
				if (dul_arr1[i] == arr3[j])
				{
					dul_arr2[cnt++] = dul_arr1[i];
					break;
				}
			}
		}
	}

	// 중복된 숫자 제거
	for (int i = 0; i < 10; i++)
	{
		if (dul_arr2[i])
		{
			for (int j = i + 1; j < 10; j++)
			{
				if (dul_arr2[i] == dul_arr2[j])
				{
					dul_arr2[i] = 0;
				}
			}
		}
	}

	cout << "이중 공통된 숫자는 : ";
	for (int i = 0; i < 10; i++)
	{
		if (dul_arr2[i])
		{
			cout << dul_arr2[i] << " ";
		}
	}
	cout << "입니다" << endl;
	cout << endl;
}

void ex8()
{
	cout << "ex8 ===============================" << endl;
	int input_a = 0;
	int input_b = 0;
	int sum = 0;

	cout << "월을 입력하세요" << endl;
	cin >> input_a;
	cout << "일을 입력하세요" << endl;
	cin >> input_b;

	for (int i = 1; i < input_a; i++)
	{
		switch (i)
		{

		case 2:
			sum += 29;
			break;

		case 4:
		case 6:
		case 9:
		case 11:
			sum += 30;
			break;

		default:
			sum += 31;
			break;
		}
	}

	sum += input_b;
	DAY day = DAY(sum % 7);

	cout << input_a << "월 " << input_b << "일은 ";

	switch (day)
	{
	case SUN:
		cout << "SUN";
		break;
	case MON:
		cout << "MON";
		break;
	case TUE:
		cout << "TUE";
		break;
	case WEN:
		cout << "WEN";
		break;
	case THU:
		cout << "THU";
		break;
	case FRI:
		cout << "FRI";
		break;
	case SAT:
		cout << "SAT";
		break;
	}

	cout << "입니다" << endl;
	cout << endl;
}
