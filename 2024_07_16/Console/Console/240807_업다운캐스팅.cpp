#include <iostream>

using namespace std;

#pragma region Upcasting Downcasting
/*
��ĳ���� Upcasting
 �ڽ� Ŭ������ ��ü�� �θ� Ŭ���� Ÿ������ ��ȯ
 ������� Ÿ�� ��ȯ�� �ʿ䰡 ����
�ٿ�ĳ���� Downcasting

*/
#pragma endregion

class Shape
{
public:
	virtual void Draw()const
	{
		cout << "�θ�Ŭ����  Shape" << endl;
	}
	virtual ~Shape() = default;
};

class Circle : public Shape
{
public:
	void Draw() const override
	{
		cout << "�ڽ�Ŭ���� circle" << endl;
	}
	void CircleFunc()
	{
		cout << "�ڽ�Ŭ����circle�� ����Լ�" << endl;
	}
};

class Rectangle : public Shape
{
public:
	void Draw() const override
	{
		cout << "�ڽ�Ŭ���� Rectangle" << endl;
	}
	void RectangleFunc()
	{
		cout << "�ڽ�Ŭ����Rectangle�� ����Լ�" << endl;
	}
};

void Print(const int v)
{
	int* newv = const_cast<int*>(&v);
}


int main()
{
	Shape* shape1;
	shape1 = new Circle(); // ��ĳ����
	shape1->Draw();

	Circle* c = dynamic_cast<Circle*>(shape1); // �ٿ�ĳ����
	c->CircleFunc();


}