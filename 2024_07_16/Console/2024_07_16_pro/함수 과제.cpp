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




//복습
void remind();
int divde(int num1, int num2);
int cal_age(int age); 
int get_angle(int angle);

// 가위바위보
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

	// 복습
	remind();

	// 가위바위보
	//RCP();
	return 0;
}

/*
과제

1. 복습 과제
- 지금 까지 배운 내용을 복습한다
- 어떻게 복습을 했는지 구체화 시켜온다
   뭔가를 만들어 와라
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
2. 가위바위보
- 스위치문을 사용해서 만든다
- 치트기능과 배팅 기능을 추가한다
- 초기 소지금 1만원 최소 배팅은 천원
- 5판 하거나 내가 가진 돈을 전부 잃으면 게임을 종료
- 이기면 판돈에 3배를 얻고 지면 판돈 7배를 잃는다
- 비길 경우 판돈에 5배를 얻는다
- 함수사용 해볼 것
   함수 갯수는 7개 이상으로
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
	cout << "현재 소지한 금액 : " << Money << "원입니다" << endl;

	if (Money <= 0)
	{
		cout << "소지한 금액이 떨어지셨습니다" << endl;
		return true;
	}

	return false;
}

int Get_Bet(int Money)
{
	int Bet = 0;

	while (true)
	{
		cout << "베팅할 금액을 적으시오 (최소금액 1000원 )" << endl;
		cin >> Bet;
		cout << endl;

		cout << "베팅한 금액 : " << Bet << endl;
		if (Bet >= 1000 && Bet <= Money)
			break;

		cout << "잘못된 금액을 베팅하셨습니다" << endl;
	}

	cout << endl;
	return Bet;
}

int Get_Hand()
{
	int Hand;

	while (true)
	{
		cout << "가위 : 1 바위 : 2 보 : 3 중 하나를 내시오" << endl;
		cin >> Hand;
		cout << endl;

		if (Hand >= 1 && Hand <= 3)
			break;

		cout << "잘못된 내셨습니다" << endl;
	}

	cout << endl;
	return Hand;
}

void Print_Hand(int Hand)
{
	switch (Hand)
	{
	case SCISSORS:
		cout << " 가위를 냈습니다" << endl;
		break;
	case ROCK:
		cout << " 바위를 냈습니다" << endl;
		break;
	case PAPER:
		cout << " 보를 냈습니다" << endl;
		break;
	}
}

int Check_Fight(int My_Hand,int Com_Hand)
{
	int Result = 0;

	cout << "당신은 ";
	Print_Hand(My_Hand);

	cout << "컴퓨터는";
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
		cout << "이기셨습니다" << endl;
		cout << Bet * WIN_MULTI  <<"원을 얻었습니다" << endl;
		Money += Bet * WIN_MULTI;
		break;
	case LOSE:
		cout << "지셨습니다" << endl;
		cout << Bet * LOSE_MULTI << "원을 잃었습니다" << endl;
		Money += Bet * LOSE_MULTI;
		break;
	case DRAW:
		cout << "비기셨습니다" << endl;
		cout << Bet * DRAW_MULTI << "원을 얻었습니다" << endl;
		Money += Bet * DRAW_MULTI;
		break;
	}

	cout << endl;
	return Money;
}
