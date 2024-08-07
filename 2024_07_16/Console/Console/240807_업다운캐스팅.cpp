#include <iostream>

using namespace std;

#pragma region Upcasting Downcasting
/*
업캐스팅 Upcasting
 자식 클래스의 객체를 부모 클래스 타임으로 변환
 명시적인 타입 변환이 필요가 없다
다운캐스팅 Downcasting

*/
#pragma endregion

class Shape
{
public:
	virtual void Draw()const
	{
		cout << "부모클래스  Shape" << endl;
	}
	virtual ~Shape() = default;
};

class Circle : public Shape
{
public:
	void Draw() const override
	{
		cout << "자식클래스 circle" << endl;
	}
	void CircleFunc()
	{
		cout << "자식클래스circle의 멤버함수" << endl;
	}
};

class Rectangle : public Shape
{
public:
	void Draw() const override
	{
		cout << "자식클래스 Rectangle" << endl;
	}
	void RectangleFunc()
	{
		cout << "자식클래스Rectangle의 멤버함수" << endl;
	}
};

void Print(const int v)
{
	int* newv = const_cast<int*>(&v);
}


int main()
{
	Shape* shape1;
	shape1 = new Circle(); // 업캐스팅
	shape1->Draw();

	Circle* c = dynamic_cast<Circle*>(shape1); // 다운캐스팅
	c->CircleFunc();


}