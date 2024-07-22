#include <iostream>
#include <string>
// -> stl string 메모리 블록이나 문자열을 다룰 수 있는 함수가 포함
// char
#include <wchar.h> // wide character
// -> 유니코드 문자를 저장하는데 사용 / 다양한 언어와 문자를 표현

using namespace std;

/*
함수와 메소드  차이점
독립성: 
 함수는 독립적으로 존재할 수 있지만, 
 메소드는 반드시 클래스나 객체에 속해야 합니다.
호출 방식: 
 함수는 이름으로 호출되지만, 
 메소드는 객체를 통해 호출됩니다.
역할: 
 함수는 일반적으로 특정 작업을 수행하는 데 사용되며, 
 메소드는 객체의 상태를 조작하거나 객체와 관련된 작업을 수행합니다
*/

#pragma region 함수
/*

함수
 구조적 프로그래밍의 대표 문법
 like 음료수 자판기

 함수를 사용하는 이유
  중복 로직 제거
  관리 용이
  가독성 향상
  편리성

 함수를 선언하는 방법
  변환 자료형 함수 이름( 입력 자료형 / 인자 인수라고 부른다)
  { 시작
    함수의 내용
  } 끝

  ex)
  void main()
  {
  }

 함수 이름 : 함수를 실행할 때 사용되는 함수의 이름 
 인자 : 함수가 해야 할 일을 세부사항을 지정하며 함수의 작업 거리
 변환 자료형 : 함수가 리턴하는 값의 데이터형, 함수의 작업 결과
 함수 내용 : {} 안에 함수의 실제코드
 
 함수의 이름은 기본적으로 유일해야한다
  동일한 이름의 함수를 2개 이상 선언하는 것은 불가능
 
 void형 함수란?
  리턴(반환) 값이 없는 함수
  함수의 입력 또는 출력이 없을경우 void 키워드를 통해 입출력 없는 것을 명시

 함수의 선언은 기본적으로 메인 함수 위쪽에 쓴다

 C/C++에서 함수 선언이 필요한 이유
  C/C++ 언어 컴파일러는 기본적으로 위에서 아래로 해석
  컴파일러가 아직 지나지 않은 함수를 호출할 경우 에러 발생
  그래서 함수의 선언을 통해 함수의 존재와 정의의 위치를 알려줘야한다
  선언과 정의가 동 파일에 존재할 필요는 없다
  함수 선언은 중복이 가능하지만 정의는 유일해야한다
 
 규약
  네이티브 -> 카멜식 / 사용엔진 -> 파스칼 케이스 
 



*/
#pragma endregion

//함수 선언
void OutputValueA();

// 인트형을 받지만 리턴값 x
void OutputValueB(int numA);
void OutputValueC(int numA, int numB);

// 문자열 반환 
void OutputString(string str);
string GetStringFunc(string strA, string strB);
int CheckingString(string strA, string strB);

//반환 값이 존재
int GetAddValue(int numA, int numB);
int GetSubValue(int numA, int numB);
int GetMultipleValue(int numA, int numB);
int GetDivideValue(float numA, float numB);

//void EnemyAttack();

namespace NS_A
{
	void EnemyAttack()
	{
		cout << "내가 바로 NS_A 함수" << endl;
	}
}

namespace NS_B
{
	void EnemyAttack()
	{
		cout << "내가 바로 NS_B 함수" << endl;
	}
}

int main()
{

	cout << endl;

	OutputValueA();
	OutputValueB(5);
	OutputValueC(1,9);

	OutputString("으악");

	int nResultA = GetAddValue(18, 45);

	//변수 형태로
	OutputValueB(nResultA);

	string sResultB = GetStringFunc("이런", "아니");
	OutputString(sResultB);

	nResultA = CheckingString("너무 졸려", "언제 끝날까");
	OutputValueB(nResultA);

	cout << endl;

	int numL = 0;
	int numR = 0;

	cout << "정수 2개 입력" << endl;

	cin >> numL >> numR;

	printf("%d + %d = %d\n", numL, numR, GetAddValue(numL, numR));
	printf("%d - %d = %d\n", numL, numR, GetSubValue(numL, numR));
	printf("%d * %d = %d\n", numL, numR, GetMultipleValue(numL, numR));
	printf("%d / %d = %d\n", numL, numR, GetDivideValue(numL, numR));

	/*
	 이처럼 함수는 다양한 유형을 가질 수 있다
	 C/C++ 언어 함수 유형
	  입력 o 출력 o
	  입력 o 출력 x
	  입력 x 출력 o
	  입력 x 출력 x

	 ex)
	 void ShowInfo(int Age, char Name);
	 int GetRandomValue(void);
	 void SomeFunc(void);
	*/

	return 0;
}

// 적절한 입출력 데이터가 있으면 함수라고 지정할 수 있다
// 또한 C/C++언어는 함수 단위로 실행하기 때문에 명령문 작성을 위해서 함수안에 작성해야한다
void OutputValueA()
{
	cout << "내가 함수다" << endl;
}

void OutputValueB(int numA)
{
	cout << numA << endl;
}

void OutputValueC(int numA, int numB)
{
	cout << numA << numB <<endl;
}

void OutputString(string str)
{
	cout << str << endl;
}

string GetStringFunc(string strA, string strB)
{
	// 함수는 return이란 키워드를 통해 종료 또는 리턴값 반환
	// 함수의 결과값은 하나의 결과만 반환

	//string은 문자열을 다룰 수 있는 다양한 기능을 포함
	cout << strA + strB << endl;
	return strA + strB;
}

int CheckingString(string strA, string strB)
{
	return strA == strB;
}

int GetAddValue(int numA, int numB)
{
	return numA + numB;
}

int GetSubValue(int numA, int numB)
{
	return numA - numB;
}

int GetMultipleValue(int numA, int numB)
{
	return numA * numB;
}

int GetDivideValue(float numA, float numB)
{
	return numA / numB;
}





/*


이번주 까지
도전 과제 - 문자열 관련 테스트
 펄어비스 

 <주의 사항>
 c++언어로 풀기 빈칸을 알맞게 채워라
 C 런타임 라이브러리 / STL라이브러리 함수 사용 금지
 STL string 사용금지
 해당 방법에 대해 왜 그렇게 작성했는지 주석 작성

 문제 주어진 문자열을 단어 단위로 순서를 뒤집어 출력하시오
  입력값 : HELLO WOLRD THIS IS PEARL ABYSS
  반환값 : PEARL ABYSS IS THIS WOLRD HELLO

  입력 문자열은 공백이 없고
  공백이 한칸으로 구분된다고 사정

  
*/

void ReverseWords(char* output, int outputArraySize, const char* input)
{
	// 채워라
}
// 작성이 끝나면 시간복잡도를 계산하는 수식 별도로 함수로 구현 왜그렇게 했는지 작성