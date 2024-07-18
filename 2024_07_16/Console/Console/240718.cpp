#include <iostream>
#include <vector>
#include <algorithm>
#include <windows.h>
#include <functional>

using namespace std;

#pragma region 연산자 + 반복문
/*

- 연산자란?
 프로그램이 동작을 할 때 정해져 있는 특정 역할을 수행하는 키워드를 연산자라 한다
 연산자를 이용하면 다양한 프로그램의 로직을 만들어 낼 수 있다.

- 기본적인 연산자의 종류

1. 산술 (+, -, *, /, %)
2. 비교 (==, !=, <, >, <=, >=)
3. 할당 (=, -=, +=, *=, /=, %=)
4. 비트 (&, |, ^)
5. 논리 (||, &&, ^)
6. 형변환 ()


- 비교 

num == num2;   -> num이 num2 이같다
num != num2;   -> num이 num2 같지 않다
num < num2;	   -> num이 num2 보다 작다
num > num2;	   -> num이 num2 보다 크다
num <= num2;   -> num이 num2 보다 작거나 같다
num >= num2;   -> num이 num2 보다 크거나 같다

- 할당

= 대입 연산자 
+= -= *= /= %=

- 비트
메모리를 효율적 / 빠른 연산을 위해 사용한다
AND
OR
XOR
NOT
<<
>>

비트셋

- 논리

bool num;
num				   num이 만족하면 실행
num && num2		   num과 num2 조건이 둘다 참이면 실행
num || num2		   num과 num2 조건이 둘중 하나라도 참이면 실행
!num			   num이 만족하지 않으면 실행

- 형변환 연산자
 변수명
 C/C++ 언어는 형변환 연산자를 이용하면 간단하게 해당변수의 자료형을 변경
 
 강제 형변환에 대해
  C스타일의 명시적 형변환은 버그가 생긴 여지 다분함 -> 프로그래머의 주의 바람
  안정성을 우선한다면 캐스팅 연산자를 사용해야한다

 static_cast<Data Type>(obj)
  타입을 obj로 변환한다
  논리적으로 가능한경우에만 변환

 C++ 타입 형변환 연산자
  static_cast
  dynamic_cast 클래스
  const_cast 상수성을 제거하는 형변환
  reinterpret_cast 포인터를 형변환


=====================================================


반복문
 프로그램의 특정 부분을 일정 횟수 반복해서 실행하는 문법
 반복문을 쓰면 반복적으로 발생하는 구간을 간단 효율적으로 처리가능

 C/C++의 표준 반복문
  1. for
  2. while
  3. do!while

 반복문은 필수 문법일까?
  
 
*/
#pragma endregion

void print_fnc(int n) {
	cout << n << " ";
}

int main()
{

	int numA = 0;

	numA = 1;
	numA++;
	numA = 6;
	numA++;
	numA += 5;
	numA--;
	numA -= 2;
	numA *= 3;
	numA /= 2;

	cout << "A의 값은 : " << numA << endl;

	/*
	C / C++ 언어는 연산자를 이용해 결과를 만들때 해당 연산자에 사용된 변수의 자료형에 따라 결과가 달라진다
    
	EX)
	정수 + 정수 = 정수
	정수 + 실수 = 실수
	
	소실의 위험이 적은 자료형으로 만들어진다.
	%는 정수형 데이터에만 사용가능
	*/


	/*
	1. for문
	 구성
	  초기식 : 반복을 위한 변수의 선언 및 초기화
	  조건식 : 반복된 조건을 검사하는 목적
	  증강식 : 반복된 조건을 거짓으로 만드는 증감소 연산

	  ex)
	  for(초기식; 조건식; 증강식)
	  {
	      반복이 되는 문장
	  }
	
	*/

	for (int i = 0; i < 10; i++)
	{
		cout << "[" << i << "번째]" << " 공부합시다" << endl;
	}
	
	cout << endl; // 3
	cout << "\n"; // 1
 	printf("\n"); // 2

	int numB = 0;

	for (; numB < 5; numB++)
	{
		cout << "이건 ? " << numB << endl;
	}

	cout << endl;

	/*
	 위 경우 처럼 for문은 초기식/조건식/증감식 생략이 가능

	 생락에 따른 유형

	 1. 초기화 생락 -> for(; i < 10; i++)
	 2. 조건식 생략 for(i = 1; ; i++)
	 3. 증감식 생략 for(; i < 10; )
	 4. 모두 생략 for(; ; )
	*/


	// 전위, 후위
	// i++ / ++i
	int j = 0;
	int i = 0;
	for (; i < 5;)
	{
		cout << "전위 : " << ++i  << endl;
		cout << "후위 : " << j++  << endl;
	}

	//대부분 반복문은 안에 반복문을 허용
	// 이를 중첩 반복문이다
	// 3중까진 괜찬으나 4중은 좀..

	vector<int> numbers;
	vector<int>::iterator vnumbers;

	for (auto number : numbers)
	{
		cout << endl;
	}
	
	//for each(auto n in numbers)
	{
		cout << endl;
	}

	for_each(numbers.begin(), numbers.end(), print_fnc);

	// for_each() for each() 알기

	/*
	2. while문
	 
	 무한(loop)
	  반복 조건에 1이 들어가는 경우 무한 루프에 빠지게 된다
	  이는 논리식으로 빠져나오거나 아니면 제어문을 통해 강제로 탈출을 해야한다
	  조건이 참일때만 작동을 한다

	 while문은 특정 조건을 주고 그 조건이 만족하는 동안 특정영역을 계속 반복하는 구조

	*/

	int HP = 1000;

	while (HP > 0)
	{
		int hit = 100;
		HP -= hit;
		cout << "현재 체력 : " << HP << endl;	
	}

	cout << endl;

	int numC = 0;

	while (numC < 5)
	{
		cout << "이게 while문이다 " << endl;
		break;
	}

	cout << endl;

	/*
	3. do~while
	 while문의 차이점 -> 조건을 검사하는 시점이 다르다 -> 반복문 끝지점에 검사
	 일단 무조건 한번을 실행이 되고 조건을 검사->
	 
	

	*/

	int numD = 0;
	do
	{
		//cout << "do ~while문" << endl; 


	} while (numD < -1);

	do
	{
		cout << "do ~while문" << endl;
		numD++;

	} while (numD < 3);

	int total = 0, num = 0;
	do
	{
		cout << "더하고 싶은 숫자 입력 (0입력시 종료)" << endl;
		cin >> num;
		total += num;
	} while (num != 0);

	cout << "입력 숫자의 합계 " << total << endl;

	

	return 0;
}


/*
 과제

 1. 구구단 구현
 - 3중 반복문 이용해서 구현
 - for / while / dowhile

 2. 연산자 활용
 - a. 두개의 정수를 받아서 두 수의 덧셉과 뺄셈을 출력하는 프로그램 작성
 - b. 3개의 정수(num1, 2, 3)를 받아서 다음 연산자의 결과를 출력하는 프로그램 작성
       EX) (n1 + n2) * (n3 + n1) % n1 =?
 - c. 입력 받은 두 정수를 나누었을 때 얻게 되는 몫과 나머지를 출력하는 프로그램 작성

 3. 반복문 출력
 - for / while / dowhile 모두 사용
 - 1부터 20까지 출력하시오 - 짝수만
 - 20 에서 1까지 출력하시오 

 4. 반복문 숙달
 - 정수 하나를 입력 받아 -5씩 반복적으로 연산되는 식을 만든다
    종료 조건 - 15를 넘어가면 탈출
	조건 : 입력받은 값은 -10 ~ 10 사이의 숫자여야하고 이외의 값을 입력시 프로그램 종료

	# 조건식과 논리 연산자를 잘 보고 조건식을 만들어 반복문이 돌아가게 하는것이 포인트

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
 
 6. 마름모 찍기
  조건 : for문 1번 + 1줄
  배운것 이외에는 사용 금지
*/