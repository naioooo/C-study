#include <iostream>

using namespace std;

#pragma region Ŭ����
/*
class
��ü���� ���α׷����̶�
 �츮�� ��� �ִ� ���谡 ��ü��� �����Ǿ� �ִ� ��ó��
 ����Ʈ��� ��ü�� �����ϴ� ���
  ��� Ƽ�� ��Ź�� ����� etc ���� ��ü�� ����
  ���� ������ ����� �ְ� ��ȣ�ۿ��� �Ѵ�
 
 ��ü��
  Ŭ���� -> Ʋ�̳� ���赵 -> ��ü�� �����ϴ� Ʋ�̳� ���赵
  Ʋ�� ������ٸ� ��Ծ���Ѵ�
  ��ü�� ���赵�� ������� ��üȭ �ϴ� �� 

 ����ü�� Ŭ������ ���̴� ����Ʈ�� ���� ���� �����ڰ� �ٸ���
 private, public, protected

 private
  Ŭ���� ���ο����� ������ �����ϴ�
 public
  Ŭ���� �ܺο����� ������ �����ϴ�
 
 ��������    Ŭ��������  Ŭ�����ܺ�  ���Ŭ����
 private        o          x          x
 public         o          o          o
 protected      o          x          o
*/
#pragma endregion

// ����ü
struct S_Circle
{
	int radius;
	string color;

	double calArea()
	{
		return 3.14f * radius * radius;
	}
};

// Ŭ����
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
		cout << "�л� Ŭ������ ����Ʈ �Լ�" << endl;
	}
	void Print(int a, int b)
	{
		cout << a << " " << b << "�л� Ŭ������ ����Ʈ �Լ�" << endl;
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
		cout << "���簢���� ���̴� " << width * length << "�Դϴ�" << endl;
	}
};

int main()
{
	S_Circle sc;
	sc.radius = 5;

	C_Circle cc;
	//private�� ������ �ȵȴ�

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
�簢���� Ŭ����
����Լ� -> �簢���� ���� ���
*/