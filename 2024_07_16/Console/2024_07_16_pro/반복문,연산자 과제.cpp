#include <iostream>
#include <windows.h>
#include<math.h>

using namespace std;

/*
 과제

 1. 구구단 구현
 - 3종 반복문 이용해서 구현
 - for / while / dowhile

 */

void gugudan()
{
	// for문
	cout << "for 문을 이용한 구구단 " << endl;
	int i = 1;

	for (; i < 4; i++)
	{
		cout << i << "단 " << endl;
		for (int j = 1; j < 10; j++)
		{
			cout << i << " * " << j << " = " << i * j << endl;
		}
		cout << endl;
	}

	// while문
	cout << "while 문을 이용한 구구단 " << endl;

	while (true)
	{
		if (i > 6)
			break;

		int j = 1;
		cout << i << "단 " << endl;

		while (true)
		{
			if (j > 9)
				break;

			cout << i << " * " << j << " = " << i * j << endl;
			j++;
		}

		i++;
		cout << endl;
	}

	// do ~ while문
	cout << "do ~ while 문을 이용한 구구단 " << endl;

	do
	{
		int j = 1;
		cout << i << "단 " << endl;

		while (true)
		{
			if (j > 9)
				break;

			cout << i << " * " << j << " = " << i * j << endl;
			j++;
		}

		i++;
		cout << endl;
	} while (i < 10);
}

/*
 2. 연산자 활용
 - a. 두개의 정수를 받아서 두 수의 덧셉과 뺄셈을 출력하는 프로그램 작성
 - b. 3개의 정수(num1, 2, 3)를 받아서 다음 연산자의 결과를 출력하는 프로그램 작성
	   EX) (n1 + n2) * (n3 + n1) % n1 =?
 - c. 입력 받은 두 정수를 나누었을 때 얻게 되는 몫과 나머지를 출력하는 프로그램 작성
 */

void Use_operator()
{
	// a. 두개의 정수를 받아서 두 수의 덧셉과 뺄셈을 출력하는 프로그램 작성

	
	int a = 0;
	int b = 0;

	cout << "첫번째 정수를 입력하시오" << endl;
	cin >> a;
	cout << endl;
	cout << "두번째 정수를 입력하시오" << endl;
	cin >> b;
	cout << endl;

	cout << "두 수의 덧셈은 " << a + b << " 이고 두 수의 뺄셈은 " << a - b << " 입니다." << endl;
	cout << endl;
	

	// b. 3개의 정수(num1, 2, 3)를 받아서 다음 연산자의 결과를 출력하는 프로그램 작성

	
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;

	cout << "첫번째 정수를 입력하시오" << endl;
	cin >> num1;
	cout << endl;
	cout << "두번째 정수를 입력하시오" << endl;
	cin >> num2;
	cout << endl;
	cout << "세번째 정수를 입력하시오" << endl;
	cin >> num3;
	cout << endl;

	cout << " (n1 + n2) * (n3 + n1) % n1 = " << (num1 + num2) * (num3 + num1) % num1 << endl;
	cout << endl;
	

	// c. 입력 받은 두 정수를 나누었을 때 얻게 되는 몫과 나머지를 출력하는 프로그램 작성

	int c = 0;
	int d = 0;

	cout << "첫번째 정수를 입력하시오" << endl;
	cin >> c;
	cout << endl;
	cout << "두번째 정수를 입력하시오" << endl;
	cin >> d;
	cout << endl;

	cout << "num1에서 num2를 나누었을 때 몫은 " << c / d << "이고 나머지는 " << c % d << "입니다 " << endl;

}

 /*
 3. 반복문 출력
 - for / while / dowhile 모두 사용
 - 1부터 20까지 출력하시오 - 짝수만
 - 20 에서 1까지 출력하시오
	 */

void print_loop()
{
	int i = 0;
	// for문
	cout << "for 문을 이용한 출력 " << endl;

	cout << "1. 1부터 20까지 짝수만 출력 " << endl;
	for (i = 2; i < 21; i += 2)
	{
		cout << i << " ";
	}
	cout << endl;
	cout << "2. 20 에서 1까지 출력 " << endl;
	for (int i = 20; i > 0; i-- )
	{
		cout << i << " ";
	}
	cout << endl;

	// while문
	cout << endl;
	cout << "while 문을 이용한 출력 " << endl;

	cout << "1. 1부터 20까지 짝수만 출력 " << endl;	
	i = 2;
	while (i <= 20)
	{
		cout << i << " ";
		i += 2;
	}
	cout << endl;
	cout << "2. 20 에서 1까지 출력 " << endl;

	i = 20;
	while (i > 0)
	{
		cout << i << " ";
		i--;
	}
	cout << endl;

	// do~while문
	cout << endl;
	cout << "do~while 문을 이용한 출력 " << endl;

	cout << "1. 1부터 20까지 짝수만 출력 " << endl;
	i = 2;
	do
	{
		cout << i << " ";
		i += 2;
	} while (i <= 20);
	cout << endl;
	cout << "2. 20 에서 1까지 출력 " << endl;

	i = 20;
	do
	{
		cout << i << " ";
		i--;
	} while (i > 0);
	cout << endl;
}
 
/*
 4. 반복문 숙달
 - 정수 하나를 입력 받아 -5씩 반복적으로 연산되는 식을 만든다
	종료 조건 - 15를 넘어가면 탈출
	조건 : 입력받은 값은 -10 ~ 10 사이의 숫자여야하고 이외의 값을 입력시 프로그램 종료

	# 조건식과 논리 연산자를 잘 보고 조건식을 만들어 반복문이 돌아가게 하는것이 포인트
*/

void master_loop()
{
	int num = 0;

	cout << " 숫자를 입력하시오 (-10 ~ 10 사이의 숫자, 이외의 숫자 입력시 종료) " << endl;
	cin >> num;

	do
	{
		cout << "현재 숫자 : " << num << endl;
		num -= 5;
	} while (num <= 10 && num >= -15);
}


 /*
 5. 별찍기
  본인이 판단한 효율적인 반복문으로 사용
  *****
  ****
  ***
  **
  *

  *
  **
  ***
  ****
  *****
 */

void draw_star()
{
	for (int i = 5; i >= 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}

	for (int i = 1; i <= 5; i++)
	{
		for (int j = 0; j < i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}

	for (int i = 5; i > 0; i--)
	{
		for (int j = 5; j > i; j--)
		{
			cout << " ";
		}
		for (int j = 0; j < i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}

	for (int i = 5; i >= 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			cout << " ";
		}
		for (int j = 5; j > i; j--)
		{
			cout << "*";
		}
		cout << endl;
	}
}

/*
 6. 마름모 찍기
  조건 : for문 1번 + 1줄
  배운것 이외에는 사용 금지
*/

void draw_rhombus()
{
	for (int i = 0, j = 10; i < 10; i++, j--)
	{
		for (int k = 0; k < j; k++)
			cout << " ";
		for (int k = 0; k < i; k++)
			cout << "*";
		for (int k = 0; k < i; k++)
			cout << "*";
		for (int k = 0; k < j; k++)
			cout << " ";
		cout << endl;
	}
	for (int i = 0, j = 10; i < 10; i++, j--)
	{
		for (int k = 0; k < i; k++)
			cout << " ";
		for (int k = 0; k < j; k++)
			cout << "*";
		for (int k = 0; k < j; k++)
			cout << "*";
		for (int k = 0; k < i; k++)
			cout << " ";
		cout << endl;
	}

}

// 한줄 조사 조건문 
// 노트에  적어온다
// 비유적 표현생각한다 조건문이란..


int main()
{
	//과제 1
	//gugudan();

	//과제 2
	//Use_operator();

	//과제 3
	//print_loop();
	
	//과제 4
	//master_loop();

	//과제 5
	draw_star();

	//과제 6
	draw_rhombus();

	return 0;
}
