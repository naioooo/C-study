// 한줄 주석
/*  단위 주석 */

// 주석이란 : 코드에 영향을 주지않는다
// 내가 타인을 위해 메모를 남기는 것을 의미한다
// 주석은 최대한 많이 남기는게 좋다.

// 주석의 역할은 컴퓨터가 읽어 들이지 않는다. -> 해석을 하지 않는다
// 컴퓨터는 똑똑한 친구 => 유도리는 없다
// 컴퓨터는 효율적인걸 좋아한다

/*
1ilI0Oo
글꼴 : consolas
*/


//전처리기 명령어
// #pragma once 
#pragma region 프로그래밍 언어

/*
프로그래밍이란?
programming. Program + ing 가 붙었으니 지금 프로그램을 하고있다라고 직역
지금 프로그램 하고 있다는 말은 결국 프로그램을 만드는 것 -> 개발을 의미

프로그래밍 언어란

컴퓨터와 대화 또는 명령을 할 수 있는 일련의 명령문을 작성할 수 있는 언어를 의미한다
프로그래밍 언어를 이용하면 프로그램을 만드는 것이 가능

프로그래밍 언어에는 다양한 언거가 존재 / 크게 2가지로 분류
1. 특정 기능 구현에 최적화 된 언어
2. 범용적 언어

프로그래밍 언어를 컴퓨터에서 이해하는 방법
C / C++ 언어로 작성되어 있는 코드는 컴퓨터가 이해할 수 없는 명령문이기 때문에
C / C++ 언어는 중간에서 해석해주는 번역기가 필요하다

번역기가 컴파일러 이다
컴파일러는 해당 코드를 컴퓨터가 이해 할 수 있는 언어로 변환하는 역할을 수행한다

컴파일러가 프로그래밍 언어롸 컴퓨터 사이에서 통역사 역할을 하기 때문에 
프로그래밍언어를 작성하는 사람은 컴퓨터의 언어를 몰라도 컴퓨터에서 명령문을 내리는 것이 가능하다

- C/C++ 의 컴파일 절차는 절차지향적이 기본 값으로 세팅되어있다
컴파일러 != 인터프리터  둘은 다르다




-> 프로그래밍 기술 및 기법

- 프로그래밍 기술은 점차 발전했고 앞으로도 발전할 것
- 다양한 기법중 4가지만 기억

1. 순차적 프로그래밍 (절차지향)
 - 프로그래밍 초기부터 사용된 기법, 코드의 흐름에 따라 프로그래밍 하는 기술
  - 요약하면 프로그램의 실행부터 종료까지 흐름을 그대로 프로그래밍한다
 - 이 방식은 프로그램의 흐름을 따라가기 때문에 구조적이지 못하고 코드가 여기저기 흩어져 있어 유지보수가 힘들다
 - C스타일

2. 구조적 프로그래밍
 - 순차적 프로그래밍의 단점을 보완하기 위해 나온 방식
  - 순차적과 차이점은 코드의 구조를 기능단위 로 묶는 방식을 채택
- 함수지향 프로그래밍이라고도 부르며 순차적보다 유지보수가 편하다

-> 이러한 기능을 묶어 모듈이라는 형대를 만들어 이는 프로그래밍 라이브러리로 발전
 - C스타일

3. 객체지향 프로그래밍
 - 전혀다른 방법으로 코드를 기준으로 "객체" 단위로 묶어 프로그래밍하는 방식
 - 모든 대상에는 속성과 매서드가 있고 이를 하나로 묶어 객체로 만드는 방식 
 - 여기서 말하는 대상은 눈에 보이지 않는 것도 포함
 - 객체지향 기법에는 다양한 기법이 있다
 - C++ 스타일 + C# 스타일


4. 컴포넌트 프로그래밍
 - 엔진 스타일 + 플랫폼 스타일
 - 코딩의 기준을 객체가 아닌 컴포넌트단위로 프로그래밍 한다
 - 각각의 컴포넌트는 독립적으로 움직이는 부품과 같으므로 다리를 떼서 동물에게 붙여주면 걷더나 달리는 것이 가능하게 된다
 - 앞으로 배우게 될 언리얼엔진이 추구하는 방식이 컴포넌트 프로그래밍

*/

// 헤더파일 <표준>
//c++ 코어 헤더
#include <iostream>

/*
 iostream : 입출력을 담당하는 C++ 표준 라이브러리
 include는 해당 경로에 있는 파일의 내용을 단순히 복사한다
 iostream에 선언되어 있는 cout/ cin/ endl 을 통해 입출력을 한다


*/
#include <windows.h>

// 절대 / 상대

//#include "Debug/Console.tlog/"

// 프로그래머 생성

#include "maingame.h"

#pragma endregion

/*
메인 함수->EP Entry Point 진입점

- 메인 함수는 1개만 존재한다
- C / C++ 언어로 작성되어있는 프로그램이 처음 실행되는 부분
- C / C++ 언어는 처음 실행되기 위해선 main 함수를 포함해야 한다 / 아니라면 실행 X
- C / C++ 언어가 프로그램으로 변환되기 위해서 거치는 큰 단계

1. 전처리기 단계
2. 컴파일 단계
3. 링크 단계
*/ 

/*
코드작성의 기본 

1. 오타체크
2. 앞뒤를 체크
3. 세미콜론을 체크
4. 논리적으로 성립하는지 체크

cout : 출력해라
endl : 줄을 바꾼다
<< : 출력 연산자 -> cout / c에선 printf()
>> : 입력 연산자 -> cin  / c에선 scanf()
:: : 접근 연산자 

대부분의 문법은 프로그래머가 귀찮으면 효율적이다
귀찮음은 설계를 풀어 주는 방식이 그 프로그래머의역할
*/


void TextColor(int font, int background);

using namespace std;

void main()
{
	// 메모리 코스트 효율을 위해선 위가 좋다
	std::cout << "hello world" << std::endl;
	cout << "hello world" << endl;

	cout << " 어쩌구 " << " 저쩌구 " << endl;
	cout << " 숫자 " << 12345 << " 출력" << endl;

	cout << " ⓑ★ " << endl;

	COORD pos = {19, 10};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	cout << "★" << endl;

	//printf("d \n d \t d \v d");

	/*
	printf(), scanf()의 서식문자

	- 서식문자는 문자열을 출력 / 입력을 받을 때 해당 서식 문자의 자리를 다른 수로 대차하기위한 자리 매김 역할하는 문자
	- 사용하는 이유는 고정되어 있지 않는 문자열을 출력 / 입력 받는 것이 가능하기 때문

	- printf() scanf() 서식문자
	   %d int / %ld long \ %lld long long \ %c char \ %s string \ %f float \ %lf double 


	printf() 특수문자
	- \n 개행 | \t 수평 | \v 수직 | \\ \ | \? ? | \` ' | \" "

	
	*/
	TextColor(4, 15);
	cout << "======================" << endl;
	TextColor(1, 0);
	}

/*
취업을 위해선..

지금부터 정리하는 습관을 들이면 아주좋다
- 기술면접 + 이론 / 나의 성장과정

방향성을 따라오고
공부도 열심히하고
목표의 취업을 위해 성공을 위해선...
 - 논리 사고 개발, 추론, 설계, 오류를 고치는 능력
*/


void TextColor(int font, int background)
{
	int color = font + background * 16;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);


}