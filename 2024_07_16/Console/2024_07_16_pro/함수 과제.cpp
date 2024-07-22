#include <iostream>
#include <time.h>

using namespace std;

#define SCISSORS 1
#define ROCK 2
#define PAPER 3
#define WIN 1
#define LOSE 2
#define DRAW 3
#define WIN_MULTI 3
#define LOSE_MULTI -7
#define DRAW_MULTI 5




//����
void remind();
int divde(int num1, int num2);
int cal_age(int age); 
int get_angle(int angle);

// ����������
void RCP(); 
bool Check_Money(int Money);
void Print_Hand(int Hand);
int Get_Bet(int Money);
int Get_Hand();
int Check_Fight(int My_Hand, int Com_Hand);
int Count_Money(int Result, int Bet, int Money);

int main()
{
	srand(time(NULL));

	// ����
	remind();

	// ����������
	//RCP();
	return 0;
}

/*
����

1. ���� ����
- ���� ���� ��� ������ �����Ѵ�
- ��� ������ �ߴ��� ��üȭ ���ѿ´�
   ������ ����� �Ͷ�
*/

void remind()
{
	int num1 = 3;
	int num2 = 2;

	divde(3, 2);

	int age = 27;
	cal_age(age);

	int angle = 80;
	get_angle(angle);
}

int divde(int num1, int num2)
{
	int answer = 0;

	answer = (float)num1 / (float)num2 * 1000;

	return answer;
}
int cal_age(int age) 
{
	int answer = 0;

	answer = 2024 - age + 1;

	return answer;
}

int get_angle(int angle)
{
	int answer = 0;

	if (angle > 0 && angle < 90)
		answer = 1;
	else if (angle == 90)
		answer = 2;
	else  if (angle > 90 && angle < 180)
		answer = 3;
	else if (angle == 180)
		answer = 4;

	return answer;
}

/*
2. ����������
- ����ġ���� ����ؼ� �����
- ġƮ��ɰ� ���� ����� �߰��Ѵ�
- �ʱ� ������ 1���� �ּ� ������ õ��
- 5�� �ϰų� ���� ���� ���� ���� ������ ������ ����
- �̱�� �ǵ��� 3�踦 ��� ���� �ǵ� 7�踦 �Ҵ´�
- ��� ��� �ǵ��� 5�踦 ��´�
- �Լ���� �غ� ��
   �Լ� ������ 7�� �̻�����
*/

void RCP()
{
	int Money = 10000;

	for (int i = 0; i < 5; i++)
	{		
		if (Check_Money(Money))
			break;

		int Bet = Get_Bet(Money);
		Money -= Bet;
		int My_Hand = Get_Hand();		
		int Com_Hand = rand() % 3 + 1;
				
		int Result = Check_Fight(My_Hand, Com_Hand);
		Money = Count_Money(Result, Bet, Money);
	}
}

bool Check_Money(int Money)
{
	cout << "���� ������ �ݾ� : " << Money << "���Դϴ�" << endl;

	if (Money <= 0)
	{
		cout << "������ �ݾ��� �������̽��ϴ�" << endl;
		return true;
	}

	return false;
}

int Get_Bet(int Money)
{
	int Bet = 0;

	while (true)
	{
		cout << "������ �ݾ��� �����ÿ� (�ּұݾ� 1000�� )" << endl;
		cin >> Bet;
		cout << endl;

		cout << "������ �ݾ� : " << Bet << endl;
		if (Bet >= 1000 && Bet <= Money)
			break;

		cout << "�߸��� �ݾ��� �����ϼ̽��ϴ�" << endl;
	}

	cout << endl;
	return Bet;
}

int Get_Hand()
{
	int Hand;

	while (true)
	{
		cout << "���� : 1 ���� : 2 �� : 3 �� �ϳ��� ���ÿ�" << endl;
		cin >> Hand;
		cout << endl;

		if (Hand >= 1 && Hand <= 3)
			break;

		cout << "�߸��� ���̽��ϴ�" << endl;
	}

	cout << endl;
	return Hand;
}

void Print_Hand(int Hand)
{
	switch (Hand)
	{
	case SCISSORS:
		cout << " ������ �½��ϴ�" << endl;
		break;
	case ROCK:
		cout << " ������ �½��ϴ�" << endl;
		break;
	case PAPER:
		cout << " ���� �½��ϴ�" << endl;
		break;
	}
}

int Check_Fight(int My_Hand,int Com_Hand)
{
	int Result = 0;

	cout << "����� ";
	Print_Hand(My_Hand);

	cout << "��ǻ�ʹ�";
	Print_Hand(Com_Hand);

	switch (My_Hand)
	{
	case SCISSORS:
		switch (Com_Hand)
		{
		case SCISSORS:			
			Result = DRAW;
			break;
		case ROCK:
			Result = LOSE;
			break;
		case PAPER:
			Result = WIN;
			break;
		}
		break;
	case ROCK:
		switch (Com_Hand)
		{
		case SCISSORS:
			Result = WIN;
			break;
		case ROCK:
			Result = DRAW;
			break;
		case PAPER:
			Result = LOSE;
			break;
		}
		break;
	case PAPER:
		switch (Com_Hand)
		{
		case SCISSORS:
			Result = LOSE;
			break;
		case ROCK:
			Result = WIN;
			break;
		case PAPER:
			Result = DRAW;
			break;
		}
		break;
	}

	cout << endl;
	return Result;
}

int Count_Money(int Result, int Bet, int Money)
{
	switch (Result)
	{
	case WIN:
		cout << "�̱�̽��ϴ�" << endl;
		cout << Bet * WIN_MULTI  <<"���� ������ϴ�" << endl;
		Money += Bet * WIN_MULTI;
		break;
	case LOSE:
		cout << "���̽��ϴ�" << endl;
		cout << Bet * LOSE_MULTI << "���� �Ҿ����ϴ�" << endl;
		Money += Bet * LOSE_MULTI;
		break;
	case DRAW:
		cout << "���̽��ϴ�" << endl;
		cout << Bet * DRAW_MULTI << "���� ������ϴ�" << endl;
		Money += Bet * DRAW_MULTI;
		break;
	}

	cout << endl;
	return Money;
}
