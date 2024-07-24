#include <iostream>

using namespace std;

int sum(int a, int b)
{
	return a + b;
}

int sum(double a, double b)
{
	return a + b;
}

int sum(int a, int b, int c)
{
	return a + b + c;
}
// 함수 오버로딩은 함수의 매개변수의 타입이 다르거나 갯수가 다르면 다른 함수로 취급한다
// 함수명이 같아야 합니다.
// 매개변수의 수나 자료형이 달라야 합니다.
// 반환형은 함수 오버로딩에 영향을 미치지 않습니다.
// 반환 자료형의 타입은 동일해야한다



// 디폴트 매개변수
// 디폴트 매개변수(Default Parameter)는 C++에서 함수 호출 시 인자를 생략할 수 있게 해주는 기능
// 함수 정의 시 매개변수에 기본 값을 설정하면, 함수 호출 시 해당 매개변수를 생략해도 기본 값이 사용됩니다
int sum2(int a = 5, int b = 10)
{
	return a + b;
}


int main()
{
	cout << sum2() << endl;
	return 0;
}


/*
과제

1. 함수 오버로딩을 활용한 캐릭터 스킬 만들기
 ex) 스킬 이름만 입력받아 사용하는 함수
 스킬 이름이랑 데이지 값을 입력받아 스킬을 사용하는 함수
 스킬 이름 데미지 크리티컬확률
 스킬 이름 데미지 크리티컬확률 피격거리

 다

*/