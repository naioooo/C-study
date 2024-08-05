#include <iostream>

using namespace std;

#pragma region static extern
/*
static

static
범위: 변수를 선언한 파일 내에서만 가시성을 가집니다.
 생명주기: 프로그램이 종료될 때까지 변수가 유지됩니다.
 사용 예시:
  정적 변수: 함수 내의 정적 변수는 함수 호출 간에 값을 유지합니다.
  정적 함수: 정적 함수는 선언된 파일 내에서만 접근할 수 있습니다.
extern
 범위: 여러 파일에서 변수를 접근할 수 있게 합니다.
 사용 예시:
  외부 변수: 다른 파일에 정의된 전역 변수를 선언합니다.
  외부 함수: 다른 파일에 정의된 함수를 선언합니다.


클래스 내에서 static
클래스내 부에서 스태틱선언된 변수는 해당클래스의 모든 인스턴스에서 공유
인스턴스 끼리 공통으로 사용되는 변수
*/
#pragma endregion

//전역변수
int num1 = 3;
int num2 = 4;

//정적 전역변수
static int staticgrobalvariable = 100;
 
void count();

class Character {

private:
	static int staticVar; // static 변수 선언

public:
	Character()
	{
		staticVar++;
	}

	void increment()
	{
		staticVar++;
	}

	static void printStaticVar()
	{
		// 스태틱 멤버함수내에선 스태틱 멤버변수만 호출이 가능하다...
		cout << "Static Variable: " << staticVar << endl;
	}
};

int Character::staticVar = 0;

int main()
{
	count();
	count();
	count();


	Character obj1;
	Character obj2;

	obj1.increment();
	obj2.increment();

	Character::printStaticVar();
	obj1.printStaticVar();
	obj2.printStaticVar();
}

void count()
{
	static int x = 0; //정적변수
	int y = 0; // 지역변수
	x = x + 1;
	y = y + 1;

	cout << "x값 : " << x << " y값 : " << y << endl;
}
