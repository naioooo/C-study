#include <iostream>
#include <time.h>

#define SCISSORS 1
#define ROCK 2
#define PAPER 3

using namespace std;

void Print_Hand(int x);
void RCP(int My_Hand, int Com_Hand);
void Example1();
void Print_Numberdays(); 
void Function(int* a, int** b, int*** c);
void Challage();

void main()
{
	srand(time(NULL));

	//���� 1
	//Example1();
	
	//���� 2
	//Print_Numberdays();	

	//��������
	Challage();
}

void Print_Hand(int x)
{
	if (x == SCISSORS)
		cout << " ������ �½��ϴ�" << endl;
	else if (x == ROCK)
		cout << " ������ �½��ϴ�" << endl;
	else if (x == PAPER)
		cout << " ���� �½��ϴ�" << endl;
}
/*
1. ���������� �����
 if���� ����ؼ� �����
  ����ġ�� X
 ������ ���� Ƚ���� �� 5��
  ���Ĵ� ���� ����
 �ʼ� : ġƮ
 - �ڵ带 �ִ��� �����ϰ�
*/
void RCP(int My_Hand, int Com_Hand)
{
	cout << "��ǻ�ʹ�";
	Print_Hand(Com_Hand);
	cout << "�����";
	Print_Hand(My_Hand);
	cout << endl;

	if (My_Hand < 1 || My_Hand > 3)
	{
		cout << "�� �� ���̽��ϴ�" << endl;
	}
	else if (My_Hand == Com_Hand)
	{
		cout << "�����ϴ�" << endl;
	}
	else if ((My_Hand - Com_Hand == -2) || (My_Hand - Com_Hand == 1))
	{
		cout << "����� �̰���ϴ�" << endl;
	}
	else if ((My_Hand - Com_Hand == 2) || (My_Hand - Com_Hand == -1))
	{
		cout << "��ǻ�Ͱ� �̰���ϴ�" << endl;
	}

	cout << endl;
}
void Example1()
{
	int My_Hand;
	int Com_Hand;

	for (int i = 0; i < 5; i++)
	{
		Com_Hand = rand() % 3 + 1;

		cout << "���� ���� �� �� �ϳ��� ���ÿ�" << endl;
		cout << "���� : 1 ���� : 2 �� : 3 " << endl;

		cout << endl;
		cin >> My_Hand;
		cout << endl;

		RCP(My_Hand, Com_Hand);
	}
}
/*
2. �ϼ� ��±�
 if���� switch�� �߿� ��� ���
 �����ϸ� ������� �Է��� �ް� ���ڿ� ���� ??������ ���
 EX) 4���Է½� -> 4���� 30�� ���� �ֽ��ϴ� -> �ٽ� �Է�Ŀ�ǵ�
 1~12�� ���� Ȯ�� �����ؾ��ϰ� ����ó�� ����
 ��5���� �Է��ϸ� ���α׷� ����
*/
void Print_Numberdays()
{
	int Month;

	for (int i = 0; i < 5; i++)
	{
		cout << "���ϴ� ���� �Է��Ͻÿ� " << endl;

		cout << endl;
		cin >> Month;
		cout << endl;

		switch (Month)
		{
		case 2:
			cout << Month << "���� ������ 28�� Ȥ�� 29�� �Դϴ�" << endl;
			break;

		case 4:
		case 6:
		case 9:
		case 11:
			cout << Month << "���� ������ 30�� �Դϴ�" << endl;
			break;

		default:
			cout << Month << "���� ������ 31�� �Դϴ�" << endl;
			break;
		}
	}
}
/*
��������
 �Լ��� �����͸� Ȱ���� ����������

 �������� �Լ�
  ��Ʈ�� ����´�
  ������ �� �����ؿ´�
*/
void Function(int* a, int** b, int*** c)
{
	cout << "�÷��̾� A�� ����������" << endl;
	int Com_Hand = rand() % 3 + 1;
	RCP(*a, Com_Hand);
	
	cout << "�÷��̾� B�� ����������" << endl;
	Com_Hand = rand() % 3 + 1;
	RCP(**b, Com_Hand);

	cout << "�÷��̾� C�� ����������" << endl;
	Com_Hand = rand() % 3 + 1;
	RCP(***c, Com_Hand);
}
void Challage()
{

	int Hand_A;
	int Hand_B;
	int Hand_C;

	cout << "�÷��̾� A�� �� ���� ���ÿ� " << endl;
	cout << "���� : 1 ���� : 2 �� : 3 " << endl;

	cin >> Hand_A;
	cout << endl;

	int* ptrA = &Hand_A;

	cout << "�÷��̾� B�� �� ���� ���ÿ� " << endl;
	cout << "���� : 1 ���� : 2 �� : 3 " << endl;

	cin >> Hand_B;
	cout << endl;

	int* ptr = &Hand_B;
	int** ptrB = &ptr;

	cout << "�÷��̾� C�� �� ���� ���ÿ� " << endl;
	cout << "���� : 1 ���� : 2 �� : 3 " << endl;

	cin >> Hand_C;
	cout << endl;

	int* ptr1 = &Hand_C;
	int** ptr2 = &ptr1;
	int*** ptrC = &ptr2;

	Function(ptrA, ptrB, ptrC);
}