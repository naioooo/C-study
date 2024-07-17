#include <iostream>
#include <time.h>

using namespace std;
using std::cin;
using std::cout;
using std::endl;

//#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

// using 지시자 : 지정된 네임스페이스와 모든 명칭을 이 선언이 있는 영역으로 가져와 소속지정없이 사용하겠다

namespace A
{
	namespace B
	{
		namespace C
		{
			int num;
		}
	}
}
namespace ABC = A::B::C;

#pragma region 자료형 + 변수 선언
/*

 - 자료형
  변수의 종류를 의미하며 기초 자료형(data type)이라고 생각하면 된다.

 - 변수란

 1. 변할 수 있는 숫자나 데이터를 의미
 2. 컴퓨터로 하여금 값을 저장할 수 있는 메모리 공간에 붙는 이름이다
 3. 변수를 이용하면 특정 값을 저장후 해당 값을 이용한 여러가지 연산이 가능

 - 자료형의 종류

 정수형(소수점이 없는 수를 표현하기 위한 자료형)
  int               4바이트 			    -2,147,483,648 ~ +2,147,483,647
  unsigned int      4바이트 			    0 ~ +4,294,967,295
  short             2바이트             -32,768 ~ +32,767
  unsigned short    2바이트 			    0 ~ +65,535
  long              4~8바이트 		   -2,147,483,648 ~ +2,147,483,647
  longlong          8바이트			   -9,223,372,036,854,775,808 ~ +9,223,372,036,854,775,807

 실수형(소수점이 존재하는 수를 표현하는 자료형)
  float             4바이트              ±3.4x10^-37 ~ ±3.4x10^+38
  double			8바이트			    ±1.7x10^-307 ~ ±1.7x10^+308
  decimal -> c#에 있는 자료형

 문자형(문자를 표현하기 위한 자료형)
  char              1바이트             -128 ~ +127 

 논리형(참/거짓을 판별하는 자료형)
  bool 1바이트 0과1 을 나타내는 자료형
  bool 자료형은 정수가 와야 할 위치에 오게되면 각각 1과 0으로 반환이 될 뿐 정수를 의미하진않는다

 기본적으로 c언어는 논리형에 해당하는 참거짓 자료형이 없었다
 그래서 0이 거짓 0이 아니면 참으로 인지
 C++에서 true / false 가 추가되었다 -> 현재는 c에서 bool 존재 stdbool.h 
 
 unsigned(양수) signed(음수)
 c/c++ 자료형은 음수를 표현하는 것이 가능하지만 경우에 따라 음수를 표현하지않는 대신 양수를 더크게하는 방법이 존재
 




 - 변수 선언
 값을 저장하는 메모리 공간에 이름을 정의하는 것을 의미한다

 기본 형식 -> 변수 형태(종류) 변수명
  ex) int number; -> number 라는 이름으로 메모리 공간이 할당
  ex) int number = 20; -> 변수 선언과 동시에 number가 의미하는 메모리 공간에 20을 넣어라

*/
#pragma endregion

int main()
{
	/*
	A::B::C::num;
	ABC::num;

	cout << endl;

	int num;

	int testA = true;
	int testB = false;
	int testsum = testA + testB;

	cout << "boolean : " << testsum << endl;

	cout << endl;

	// 변수 초기화 
	int X;
	X = 10;

	int A = 3;
	int B = 6;
	int sum;

	int C;
	int D;
	int E;
	int F, G, H;
	F = G = H = 100;
	
	//sizeof() 키워드의 한 종류로 변수 또는 자료형의 크기를 계산하는 것
	cout << "정수 사이즈 " << sizeof(1) << endl;
	cout << "정수 사이즈 " << sizeof(2) << endl;
	cout << "true 사이즈 " << sizeof(true) << endl;
	cout << "false 사이즈 " << sizeof(false) << endl;
	cout << "false 사이즈 " << sizeof(long long) << endl;


	cout << endl;
	
	int nValue = 0;

	cout << "숫자 입력" << endl;
	cin >> nValue;

	cout << "내가 입력한 숫자 : " << nValue << endl;

	printf("정수 입력 : ");
	scanf("%d", &nValue);

	printf("%d", nValue);
	
	cout << endl;
	
	short V_A = 10;
	int V_B = 20;
	long V_C = 30;
	long long V_D = 40;

	cout << "C++ Short : " << V_A << ", " << "사이즈 : " << sizeof(V_A) << endl;
	cout << "C++ int : " << V_B << ", " << "사이즈 : " << sizeof(V_B) << endl;
	cout << "C++ long : " << V_C << ", " << "사이즈 : " << sizeof(V_C) << endl;
	cout << "C++ long long : " << V_D << ", " << "사이즈 : " << sizeof(V_D) << endl;

	printf("C 언어 short : %d, %d \n", V_A, sizeof(V_A));
	printf("C 언어 int : %d, %d \n", V_B, sizeof(V_B));
	printf("C 언어 long : %d, %d \n", V_C, sizeof(V_C));
	printf("C 언어 long long : %d, %d \n", V_D, sizeof(V_D));
	*/
	/*
	변수 표기법

	1. 헝가리안
	 - 절차지향적 코딩할 시 많이 사용된 표기법
	 - 이 변수가 어떤 변수인지 알기 위하여 서로 약속하듯이 앞에 그 변수형태가 뜻하는 약자를 붙인다
	 - 현재 네이티브 코딩 방식에는 거의 사용되지 않는다 -> 객체지향이기 때문
	 EX) int num => nNum
	     float ValueA => fValueA;
	     double ValueA => dValueA;
	     char ValueA => chValueA;

	2. 카멜
	 - 객체지향적인 방식의 코딩으로 전환하면서 가독성을 챙긴 표기법
	 
	 EX) int playerselectnum -> playerSelectNum

	3. 파스칼 케이스
	 EX) int playerselectnum -> PlayerSelectNum

	4. 스네이크
	 EX) int playerselectnum -> Player_Select_Num

	5. 레스
	 EX) int playerselectnum -> PlSelN

	 변수 이름의 특징
	 1. 기본적으로ㅓ 변수의 이름은 알파벳 수자로 구성
	 2. C언어는 대소문자 구별하면 다른변수

	 a. 변수는 숫자로시작할 수 없다
	 b. 키워드 역시 변수로 사용안됨
	 c. 이름사이에 공백삽임 안된다

	*/
     
/*
    srand(time(NULL));

	int numR;
	numR = rand() % 50;
	cout << numR << endl;

	
	*/
	// 20 ~ 25
	int weaponA = 0;
	weaponA = rand() % 6 + 20;
	cout << "무기의 공격력은 : " << weaponA << endl;

	return 0;
}


/*
과제1 좋아하는 캐릭터 출력

- 컬러풀하게 출력
- 50 x 50

과제2. 간단한 아이템 만들기

- 종류와 데미지 가격이 다른 무기와 방어구 5종 만들고 화면에 출력
- 출력된 화면에는 아이템 종류에 따른 가격 + 특성이 함께 나열
- 무기 1종 + 방어구 1종에는 반드시 도트를 적용해야한다

과제3. 랜덤 숫자 담기

- 1 ~ 5까지의 랜덤 숫자
- 6 ~ 19까지의 랜덤 숫자
- 23 ~ 189까지의 랜덤 숫자 -> 출력이 될때 최소 최대값 명시

한줄 조사 - 반복문 + 연산자
- 반복문의 종류 + 연산자의 종류
- 노트에 필기

*/