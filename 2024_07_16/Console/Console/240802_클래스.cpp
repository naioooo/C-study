#include <iostream>

using namespace std;

#pragma region 클래스
/*
class
객체지향 프로그래밍이란
 우리가 살고 있는 세계가 객체들로 구성되어 있는 것처럼
 소프트웨어도 객체로 구성하는 방법
  사람 티비 세탁기 냉장고 etc 많은 객체가 존재
  각자 고유한 기능이 있고 상호작용을 한다
 
 객체란
  클래스 -> 틀이나 설계도 -> 객체를 정의하는 틀이나 설계도
  틀만 만들었다면 써먹어야한다
  객체는 설계도를 기반으로 실체화 하는 것 

 구조체와 클래스의 차이는 디폴트의 접근 제어 지시자가 다르다
 private, public, protected

 private
  클래스 내부에서만 참조가 가능하다
 public
  클래스 외부에서도 참조가 가능하다
 
 접근제어    클래스내부  클래스외부  상속클래스
 private        o          x          x
 public         o          o          o
 protected      o          x          o
*/
#pragma endregion

// 구조체
struct S_Circle
{
	int radius;
	string color;

	double calArea()
	{
		return 3.14f * radius * radius;
	}
};

// 클래스
class C_Circle
{
private:
	int radius;
	string color;

public:
	double calArea()
	{
		return 3.14f * radius * radius;
	}
};

class Student
{
private:
public:
	void Print()
	{
		cout << "학생 클래스의 프린트 함수" << endl;
	}
	void Print(int a, int b)
	{
		cout << a << " " << b << "학생 클래스의 프린트 함수" << endl;
	}
	void Print(string str = " default ")
	{
		cout << str << endl;
	}
	int Sum(int a, int b);
};

class Rectangle
{
private:
	int width;
	int length;

public:
	Rectangle() 
	{
		width = 10;
		length = 10;
	};
	Rectangle(int w, int h)
	{
		width = w;
		length = h;
	};

	void Set_width(int _width)
	{
		width = _width;
	}
	void Set_length(int _length)
	{
		length = _length;
	}
	void Print_area()
	{
		cout << "직사각형의 넓이는 " << width * length << "입니다" << endl;
	}
};

int main()
{
	S_Circle sc;
	sc.radius = 5;

	C_Circle cc;
	//private에 접근이 안된다

	Rectangle R(10, 20);
	Rectangle S;
	R.Print_area();
	S.Print_area();
}

int Student::Sum(int a, int b)
{
	return a + b;
}

/*
사각형의 클래스
멤버함수 -> 사각형의 넓이 출력
*/