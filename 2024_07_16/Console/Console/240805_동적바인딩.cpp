#include <iostream>

using namespace std;

#pragma region 정적바인딩 vs 동적바인딩
/*
정적 바인딩 (Static Binding)
 컴파일 시점에 바인딩이 결정됩니다.
 컴파일러가 함수 호출을 해당 함수 정의와 연결합니다.
 주로 함수 오버로딩과 관련이 있습니다.
 성능이 더 빠르지만 유연성이 떨어질 수 있습니다.
동적 바인딩 (Dynamic Binding)
 런타임 시점에 바인딩이 결정됩니다.
 프로그램 실행 중에 함수 호출이 해당 함수 정의와 연결됩니다.
 주로 가상 함수와 다형성과 관련이 있습니다.
 유연성이 높지만 성능이 약간 떨어질 수 있습니다.

정적 바인딩 (Static Binding)
 장점:
  성능: 컴파일 시점에 함수 호출이 결정되므로 실행 속도가 빠릅니다.
  단순성: 코드가 단순하고 이해하기 쉽습니다.
 단점:
  유연성 부족: 런타임에 함수 호출을 변경할 수 없으므로 다형성을 활용하기 어렵습니다.
  확장성 제한: 새로운 기능을 추가하거나 변경할 때 코드 수정이 필요합니다.

동적 바인딩 (Dynamic Binding)
 장점:
  유연성: 런타임에 함수 호출을 결정할 수 있어 다형성을 쉽게 구현할 수 있습니다.
  확장성: 새로운 클래스나 기능을 추가할 때 기존 코드를 수정하지 않고도 확장할 수 있습니다.
 단점:
  성능: 런타임에 함수 호출을 결정하므로 약간의 성능 저하가 발생할 수 있습니다.
  복잡성: 코드가 복잡해지고 디버깅이 어려울 수 있습니다.

차이점
 결정 시점: 정적 바인딩은 컴파일 시점에, 동적 바인딩은 런타임 시점에 함수 호출이 결정됩니다.
 다형성: 정적 바인딩은 다형성을 지원하지 않지만, 동적 바인딩은 다형성을 지원합니다.
 성능: 정적 바인딩은 성능이 더 빠르지만, 동적 바인딩은 유연성과 확장성이 더 높습니다.
*/
#pragma endregion

class CPrint
{
public:
	void Print(int a)
	{
		cout << "int 형 출력" << endl;
	}
	void Print(double a)
	{
		cout << "double 형 출력" << endl;
	}
};

class Parent 
{
public:
	virtual ~Parent() =default;
	virtual void Show()
	{
		cout << "부모클래스 show 함수" << endl;
	}
};

class Child : public Parent
{
public:

	~Child() = default;
	void Show() override
	{
		cout << "자식클래스 show 함수" << endl;
	}
};

int main()
{
	CPrint c;
	c.Print(1);
	c.Print(1.5f);

	Parent* pPtr = new Child();
	pPtr->Show();

	delete pPtr
}