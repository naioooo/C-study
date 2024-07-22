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

	//과제 1
	//Example1();
	
	//과제 2
	//Print_Numberdays();	

	//도전과제
	Challage();
}

void Print_Hand(int x)
{
	if (x == SCISSORS)
		cout << " 가위를 냈습니다" << endl;
	else if (x == ROCK)
		cout << " 바위를 냈습니다" << endl;
	else if (x == PAPER)
		cout << " 보를 냈습니다" << endl;
}
/*
1. 가위바위보 만들기
 if문을 사용해서 만든다
  스위치문 X
 게임의 진행 횟수는 총 5판
  이후는 게임 종료
 필수 : 치트
 - 코드를 최대한 간결하게
*/
void RCP(int My_Hand, int Com_Hand)
{
	cout << "컴퓨터는";
	Print_Hand(Com_Hand);
	cout << "당신은";
	Print_Hand(My_Hand);
	cout << endl;

	if (My_Hand < 1 || My_Hand > 3)
	{
		cout << "잘 못 내셨습니다" << endl;
	}
	else if (My_Hand == Com_Hand)
	{
		cout << "비겼습니다" << endl;
	}
	else if ((My_Hand - Com_Hand == -2) || (My_Hand - Com_Hand == 1))
	{
		cout << "당신이 이겼습니다" << endl;
	}
	else if ((My_Hand - Com_Hand == 2) || (My_Hand - Com_Hand == -1))
	{
		cout << "컴퓨터가 이겼습니다" << endl;
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

		cout << "가위 바위 보 중 하나를 내시오" << endl;
		cout << "가위 : 1 바위 : 2 보 : 3 " << endl;

		cout << endl;
		cin >> My_Hand;
		cout << endl;

		RCP(My_Hand, Com_Hand);
	}
}
/*
2. 일수 출력기
 if문과 switch문 중에 골라서 사용
 시작하면 사용자의 입력을 받고 숫자에 따리 ??일인지 출력
 EX) 4를입력시 -> 4월은 30일 까지 있습니다 -> 다시 입력커맨드
 1~12월 까지 확인 가능해야하고 예외처리 진행
 총5번을 입력하면 프로그램 종료
*/
void Print_Numberdays()
{
	int Month;

	for (int i = 0; i < 5; i++)
	{
		cout << "원하는 월을 입력하시오 " << endl;

		cout << endl;
		cin >> Month;
		cout << endl;

		switch (Month)
		{
		case 2:
			cout << Month << "월의 끝날은 28일 혹은 29일 입니다" << endl;
			break;

		case 4:
		case 6:
		case 9:
		case 11:
			cout << Month << "월의 끝날은 30일 입니다" << endl;
			break;

		default:
			cout << Month << "월의 끝날은 31일 입니다" << endl;
			break;
		}
	}
}
/*
도전과제
 함수와 포인터를 활용한 가위바위보

 한줄조사 함수
  노트에 적어온다
  비유할 것 생각해온다
*/
void Function(int* a, int** b, int*** c)
{
	cout << "플레이어 A의 가위바위보" << endl;
	int Com_Hand = rand() % 3 + 1;
	RCP(*a, Com_Hand);
	
	cout << "플레이어 B의 가위바위보" << endl;
	Com_Hand = rand() % 3 + 1;
	RCP(**b, Com_Hand);

	cout << "플레이어 C의 가위바위보" << endl;
	Com_Hand = rand() % 3 + 1;
	RCP(***c, Com_Hand);
}
void Challage()
{

	int Hand_A;
	int Hand_B;
	int Hand_C;

	cout << "플레이어 A가 낼 것을 고르시오 " << endl;
	cout << "가위 : 1 바위 : 2 보 : 3 " << endl;

	cin >> Hand_A;
	cout << endl;

	int* ptrA = &Hand_A;

	cout << "플레이어 B가 낼 것을 고르시오 " << endl;
	cout << "가위 : 1 바위 : 2 보 : 3 " << endl;

	cin >> Hand_B;
	cout << endl;

	int* ptr = &Hand_B;
	int** ptrB = &ptr;

	cout << "플레이어 C가 낼 것을 고르시오 " << endl;
	cout << "가위 : 1 바위 : 2 보 : 3 " << endl;

	cin >> Hand_C;
	cout << endl;

	int* ptr1 = &Hand_C;
	int** ptr2 = &ptr1;
	int*** ptrC = &ptr2;

	Function(ptrA, ptrB, ptrC);
}