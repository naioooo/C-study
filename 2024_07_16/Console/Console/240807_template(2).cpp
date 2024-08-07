#include <iostream>

using namespace std;

template<typename T>
class Shape
{
public:
	virtual void draw()const = 0; // ���������Լ�
	virtual T area()const = 0;
	virtual void PrintArea()const = 0;

};

template<typename T>
class Circle : public Shape<T>
{
private:
	T radius;
public:
	Circle(T r) : radius(r){}

	void draw()const
	{
		cout << "������ : " << radius << endl;
	}
	T area()const 
	{
		return 3.14 * radius * radius;
	}
	void PrintArea()const 
	{
		cout << "���� : " << 3.14 * radius * radius << endl;
	}
};

template<typename T>
class Rectangle : public Shape<T>
{
private:
	T width;
	T height;
public:
	Rectangle(T w, T h) : width(w), height(h){}

	void draw()const
	{
		cout << "�ʺ� : " << width << " ���� : " << height << endl;
	}
	T area()const 
	{
		return width * height;
	}
	void PrintArea()const 
	{
		cout << "���� : " << width * height << endl;
	}
};

template<typename T>
void Show(const Shape<T>* shape)
{
	shape->draw();
	shape->PrintArea();
}



int main()
{
	Shape<double>* s1 = new Circle<double>(5.5f);
	Shape<int>* s2 = new Rectangle<int>(5, 10);

	Show(s1);
	Show(s2);



}

