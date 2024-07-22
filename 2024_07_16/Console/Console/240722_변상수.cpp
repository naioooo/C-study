#include <iostream>

using namespace std;

#pragma region 변/상수
/*
상수란
 변수와 달리 저장 된 데이터를 변경 할 수 없는 공간에 붙여진 의미
  상수는 데이터가 저장되면 "일반적으로" 변경하는 것이 불가능

C/C++ 의 상수의 종류
 리터럴 상수
  이름이 없는 상수, 임시값이라고 지칭
 심볼릭 상수
  이름이 존재하는 상수
  심볼릭 상수는 const 키워드를 통해 선언이 가능하다
  리터럴 상수와 달리 이름을 통해 저장된 데이터를 읽어 들이는 것이 가능

 constexpr
  C++11 상수화 키워드
   객체/함수 앞에 붙일 수 있고 해당 객체나 함수의 반환값을 컴파일 타임에 알 수 있다
   C++17부터는 람다식에도 적용가능
  컴파일 타임 확정이기에 템플릿과 궁합이 좋다

 const vs constexpr
 컴파일 타임 vs 런타임:
  const는 런타임 상수이고, constexpr는 컴파일 타임 상수입니다.
 초기화 시점: 
  const 변수는 런타임에 초기화될 수 있지만, constexpr 변수는 반드시 컴파일 타임에 초기화되어야 합니다.
 사용 목적:
  constexpr는 컴파일 타임에 상수 값을 미리 계산하여 최적화할 수 있는 경우에 사용됩니다.
 

 C#에서의 상수화..
 readonly
  C#에서 지원하는 상수화 키워드
  const vs readonly
  const 
   초기화 이후 값을 변경할 수 없다
   선언하는 시점에만 초기화 가능
   컴파일 타임 상수
  readonly
   초기화 이후 값을 변경할 수 없다
   선언 하는 시점과 생성자에서 초기화 1번 가능
   런타임 상수

   컴파일 타임 상수는 변수가 실제값으로 대체되고
   런타임 상수는 변수 참조 형식이기에 성능과 속도는 const가 유리
   다만 인스턴스 마다 다른 값을 할당하고 싶거나 사용자 정의 자료형이면
   readonly가 유지보수가 좋다

 define vs const
  매크로를 배우고 나서

신입이 약한 파트
 문자 / 열 + 상수


*/
#pragma endregion


int main()
{
	cout << " -리터럴 상수- " << endl;
	cout << "정수형 : " << 10 << ", " << 10L << ", " << 10LL << endl;
	cout << "실수형 : " << 3.14f << ", " << 3.14 << ", " << .456 << endl;
	cout << "문자형 : " << 'A' << endl;

	cout << endl;

	//변,상수는 생성과 동시에 대입이 가능하다 -> 이것이 초기화

	int numberA = 10; // -> 초기화
	int numberB;
	numberB = 10;

	cout << " -심볼릭 상수- " << endl;
	
	const int nValue = 0;
	const float fValue = 3.14f;
	const double dValue = 3.14;

	cout << "출력값 : " << nValue << ", " << fValue << ", " << dValue << endl;
	printf(" %d, %f, %lf", nValue, fValue, dValue);


	// 상수는 다양하게 사용이 된다


	// 1. 같은 의미 
	const int cNumberA = 100;
	int const cNumberB = 100;


	// 2. 변수명이 가르키는 주소의 값이 상수화된다
	// 주소의 상수화를 의미한다
	const int* cNumberC;

	// 3. 포인터 변수의 상수화
	int pNum;
	int* const cNumberD = &pNum;

	// 4. 주소와 변수 모두 상수화
	const int* const cNumberD = &pNum;


	return 0;
}


/*
과제

1. 복습 과제
- 지금 까지 배운 내용을 복습한다
- 어떻게 복습을 했는지 구체화 시켜온다
   뭔가를 만들어 와라

2. 가위바위보
- 스위치문을 사용해서 만든다
- 치트기능과 배팅 기능을 추가한다
- 초기 소지금 1만원 최소 배팅은 천원
- 5판 하거나 내가 가진 돈을 전부 잃으면 게임을 종료
- 이기면 판돈에 3배를 얻고 지면 판돈 7배를 잃는다
- 비길 경우 판돈에 5배를 얻는다
- 함수사용 해볼 것
   함수 갯수는 7개 이상으로

한줄 조사 : 배열
노트에 적어오고 비유할 것 띵킹

*/