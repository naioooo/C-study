#include <iostream>

using namespace std;

#pragma region Template
/*
Template
 다양한 자료형에 유연하게 함수나 클래스를 적용할 수 있는 기능입니다. 
 템플릿을 사용하면 코드 중복을 방지하고 일반화 프로그래밍을 할 수 있습니다.
의의
 변수, 함수 특정데이터를 사용하는 실체들의 대부분 선언하기를 원함
 데이터형이 달라도 같은 코드를 갖는경우에 사용
 같은 데이터 구조와 동작을 구현한다면 취급하는 데이터형이 달라지더라도 코드는 동일
 동일한 동작을 계속 구현할 수 있지만 실수를 할 수 있기에
 템플릿을 통해 간단 명료하게 해결할 수 있다

템플릿을 쓴다면
 아직 정해지지 않은 다양한 데이터형에 대해서도 함수나 클래스 정의가능
 템플릿을 쓰면 묵시적 명시적 데이터형을 인자로 알린다

함수템플릿(Function Templates)
 함수에 필요한 자료형을 선언하고 함수 호출시 자료형을 지정하고 선언합니다
 함수를 여러 자료형에 대해 일반화하여 작성하는 방법입니다.
 템플릿으로 작성한 함수는 호출 시 자료형에 맞는 함수를 생성

클래스 템플릿 (Class Templates)
 클래스 템플릿은 클래스를 여러 자료형에 대해 일반화하여 작성하는 방법입니다.
 클래스 템플릿을 사용하면 생성 시점에 타입을 명시해줘야 합니다.
 템플릿으로 작성한 클래스는 호출 시 자료형에 맞는 함수를 생성
*/
#pragma endregion

//int GetMax(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//
//float GetMax(float x, float y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}

// 함수템플릿을 활용한다면...
template <typename T>
T GetMax(const T x, const T y)
{
	if (x > y)
		return x;
	else
		return y;
}

template <typename T>
T const & max(T const& x, T const& y)
{
	return x < y ? y : x;
}

template <typename T>
void Output(const T data)
{
	cout << " 데이터 : " << data << endl;
}
template <typename T1, typename T2>
void Output1(const T1 A, T2 B)
{
	cout << A << " " << B << endl;
}

template <typename T>
class Box
{
private:
	T data;
public:
	void SetData(T d) 
	{ 
		data = d;
	}
	T GetData()
	{
		return data;
	}	
};

template <typename T1, typename T2>
class TwoBox
{
private:
	T1 firstdata;
	T2 seconddata;
public:
	void SetFirstData(T1 d)
	{
		firstdata = d;
	}
	void SetSecondData(T2 d)
	{
		seconddata = d;
	}
	T1 GetFirstData()
	{
		return firstdata;
	}
	T2 GetSecondData()
	{
		return seconddata;
	}
};

int main()
{
	int a = 10;
	int b = 20;
	cout << GetMax(a, b) << endl;

	string data = " 호날두";
	Output(a);
	Output(b);
	Output1(data, a);

	Box<int> box;
	box.SetData(10);

	TwoBox<int, string> tbox;
	tbox.SetFirstData(20);
	tbox.SetSecondData("메시");

	cout << box.GetData() << endl;
	cout << tbox.GetFirstData() << ", " << tbox.GetSecondData() << endl;
}
