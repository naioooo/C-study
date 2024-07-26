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

#pragma region ������
/*

���� 

1��
1. for (�ʱ�ȭ; ����; ����){}

2��
2. if(����) {}

3��
3. 30

4��
4. continue

5��
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
	cout << " a�� ��Ʈ �����ڷ� 32�� 2������ Ǯ�� 100000�̰� >> 1 �̸� ��ĭ�� ������Ƿ� 010000 = �� 16�̴� " << endl;
	cout << b << endl; // 2
	cout << " b�� ���������� 16�� �������� 10000���� 3ĭ�� ������Ƿ� �������� 00010�̸� �������� 2�� �ȴ�  " << endl;
	cout << endl;
}

void ex2()
{
	cout << "ex2 ===============================" << endl;

	int input = 0;
	bool check = false;
	cout << "�Ҽ����� �Ǻ��� ���ڸ� �Է��Ͻÿ�" << endl;
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
		cout << input << "�� �Ҽ��� �ƴմϴ� " << endl;
	}
	else
	{
		cout << input << "�� �Ҽ��Դϴ� " << endl;
	}
	cout << endl;
}

void ex3()
{
	cout << "ex3 ===============================" << endl;

	int input1 = 0;
	int input2 = 0;
	int sum = 0;

	cout << "ù��° ���ڸ� �Է��Ͻÿ�" << endl;
	cin >> input1;
	cout << "�ι�° ���ڸ� �Է��Ͻÿ�" << endl;
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

	cout << "�� ���� ������ ���� " << sum << "�Դϴ�" << endl;
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
	cout << "�� �迭���� 1���� 10�� ¦���� ����Ѵٸ�" << endl;

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
	cout << "2������ ��ȯ�� ���ڸ� �Է��Ͻÿ�" << endl;
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

	cout << input << "�� 2������ ǥ���ϸ� " << binary << "�Դϴ�" << endl;
	cout << endl;
}

void ex6()
{
	cout << "ex6 ===============================" << endl;
	string input = "�ȳ� �� ���������� ����� ��� ��";
	int cnt = 0;
	cout << input << endl;
	

	for (int i = 0; i < input.size(); i++)
	{
		if (input[i] == ' ') // �������� �ܾ� �� üũ
			cnt++;
	}
	cnt++; // ������ ������ ������ �ܾ� �� �߰�

	cout << "�� ������ �ܾ� ���� " << cnt << "�� �Դϴ�" << endl;
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

	// arr1�� arr2 ��
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

	// �ߺ��� ���� ����
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
	// arr1�� arr2�� �ߺ��� �迭�� arr3�� ��
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

	// �ߺ��� ���� ����
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

	cout << "���� ����� ���ڴ� : ";
	for (int i = 0; i < 10; i++)
	{
		if (dul_arr2[i])
		{
			cout << dul_arr2[i] << " ";
		}
	}
	cout << "�Դϴ�" << endl;
	cout << endl;
}

void ex8()
{
	cout << "ex8 ===============================" << endl;
	int input_a = 0;
	int input_b = 0;
	int sum = 0;

	cout << "���� �Է��ϼ���" << endl;
	cin >> input_a;
	cout << "���� �Է��ϼ���" << endl;
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

	cout << input_a << "�� " << input_b << "���� ";

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

	cout << "�Դϴ�" << endl;
	cout << endl;
}
