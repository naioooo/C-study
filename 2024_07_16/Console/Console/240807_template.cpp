#include <iostream>

using namespace std;

#pragma region Template
/*
Template
 �پ��� �ڷ����� �����ϰ� �Լ��� Ŭ������ ������ �� �ִ� ����Դϴ�. 
 ���ø��� ����ϸ� �ڵ� �ߺ��� �����ϰ� �Ϲ�ȭ ���α׷����� �� �� �ֽ��ϴ�.
����
 ����, �Լ� Ư�������͸� ����ϴ� ��ü���� ��κ� �����ϱ⸦ ����
 ���������� �޶� ���� �ڵ带 ���°�쿡 ���
 ���� ������ ������ ������ �����Ѵٸ� ����ϴ� ���������� �޶������� �ڵ�� ����
 ������ ������ ��� ������ �� ������ �Ǽ��� �� �� �ֱ⿡
 ���ø��� ���� ���� ����ϰ� �ذ��� �� �ִ�

���ø��� ���ٸ�
 ���� �������� ���� �پ��� ���������� ���ؼ��� �Լ��� Ŭ���� ���ǰ���
 ���ø��� ���� ������ ����� ���������� ���ڷ� �˸���

�Լ����ø�(Function Templates)
 �Լ��� �ʿ��� �ڷ����� �����ϰ� �Լ� ȣ��� �ڷ����� �����ϰ� �����մϴ�
 �Լ��� ���� �ڷ����� ���� �Ϲ�ȭ�Ͽ� �ۼ��ϴ� ����Դϴ�.
 ���ø����� �ۼ��� �Լ��� ȣ�� �� �ڷ����� �´� �Լ��� ����

Ŭ���� ���ø� (Class Templates)
 Ŭ���� ���ø��� Ŭ������ ���� �ڷ����� ���� �Ϲ�ȭ�Ͽ� �ۼ��ϴ� ����Դϴ�.
 Ŭ���� ���ø��� ����ϸ� ���� ������ Ÿ���� �������� �մϴ�.
 ���ø����� �ۼ��� Ŭ������ ȣ�� �� �ڷ����� �´� �Լ��� ����
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

// �Լ����ø��� Ȱ���Ѵٸ�...
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
	cout << " ������ : " << data << endl;
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

	string data = " ȣ����";
	Output(a);
	Output(b);
	Output1(data, a);

	Box<int> box;
	box.SetData(10);

	TwoBox<int, string> tbox;
	tbox.SetFirstData(20);
	tbox.SetSecondData("�޽�");

	cout << box.GetData() << endl;
	cout << tbox.GetFirstData() << ", " << tbox.GetSecondData() << endl;
}
