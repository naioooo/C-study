#include <iostream>

using namespace std;

#pragma region 소멸자
/*
소멸자(Destructor)
 객체가 소멸될 때 자동으로 호출되는 멤버함수
 매개변수를 가질 수 없고 반환 값도 없고 오버로딩 불가능

소멸자의 특징
 자동 호출: 객체가 범위를 벗어나거나 delete 키워드로 삭제될 때 자동으로 호출됩니다.
 이름 규칙: 클래스 이름 앞에 물결표(~)를 붙여서 정의합니다.
 매개변수 없음: 소멸자는 매개변수를 가질 수 없습니다.
 ->반환값 없음: 소멸자는 반환값을 가질 수 없습니다.

*/
#pragma endregion

class MyClass
{
private:
	int* data;
public:
	MyClass(int size); // 생성자
	~MyClass(); // 소멸자
};

int main()
{
	MyClass* cla = new MyClass(20);

	delete cla;

	return 0;
}

MyClass::MyClass(int size)
{
	data = new int[size];
	cout << "생성자 호출" << endl;
}

MyClass::~MyClass()
{
	delete[] data;
	data = nullptr;


	cout << "소멸자 호출" << endl;
}
