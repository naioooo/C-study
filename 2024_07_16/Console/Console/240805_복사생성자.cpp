#include <iostream>
#include <vector>

using namespace std;

#pragma region ���������
/*
���� ������
 ������ Ŭ������ ��ü�� �����ؼ� ������ �� ����ϴ� ������

���� ���� (Shallow Copy)
 Ư¡: ���� ����� ��ü�� ����(�޸� �ּ�)�� �����մϴ�. 
       ���� ���� ��ü�� ����� ��ü�� ������ �޸� �ּҸ� ����Ű�� �˴ϴ�.
 ����: ������ �޸� ȿ�����Դϴ�.
 ����: ���� ��ü�� ����� ��ü �� �ϳ��� ����Ǹ�, �ٸ� �ϳ��� ������ �޽��ϴ�.
 
 ��� ������ �����͸� �������� �ּҰ��� ���� -> ���� �޸� ���� ����Ų��
 ���� ��ü���� �޸𸮸� �����ϸ� ������ �޴´�
 �ΰ�ü�� ���� �޸� �ּҸ� ����Ͽ� ���� �Ҹ��ϸ鼭 �޸� ������ �Ѵٸ�
 �ٸ� ��ü�� ��ȿ���� ���� �����͸� ������ �Ǿ� ������ �ȴ�

���� ���� (Deep Copy)
 Ư¡: ���� ����� ��ü�� ��� �ʵ带 �����Ͽ� ���ο� ��ü�� �����մϴ�.
       ���� ���� ��ü�� ����� ��ü�� �������� �޸� ������ ������ �˴ϴ�.
 ����: ���� ��ü�� ����� ��ü�� �������̹Ƿ�, �� ��ü�� ������ �ٸ� ��ü�� ������ ��ġ�� �ʽ��ϴ�.
 ����: �޸𸮿� �ð��� �� ���� �ҿ�˴ϴ�.
*/
#pragma endregion

class Person
{
private:
	int age;

public:
	Person(int a) : age(a) {};
	Person(const Person& other) : age(other.age) {};
	void SetAge(int a)
	{
		age = a;
	}
	int Getage()
	{
		return age;
	}

};


class MyArray
{
private:
	int* data;
	int size;
public:
	MyArray(int _size) : size(_size), data(new int[_size]) {}
	~MyArray()
	{
		if (data != nullptr)
		{
		//	delete[] data;
		}
		//data = nullptr;
	}

	void SetValue(int index, int Value)
	{
		data[index] = Value;
	}
	int	GetValue(int index)
	{
		return data[index];
	}
};

class MyArray2
{
private:
	int* data;
	int size;
public:
	MyArray2(int _size) : size(_size), data(new int[_size]) {}
	// ���� ����
	MyArray2(const MyArray2& other)
	{
		size = other.size;
		data = new int[size]; // �����Ҵ�
		// ������ ����
		for (int i = 0; i < size; i++)
		{
			data[i] = other.data[i];
		}
	}
	~MyArray2()
	{
		if(data != nullptr)
			delete[] data;
	}

	void SetValue(int index, int Value)
	{
		data[index] = Value;
	}
	int	GetValue(int index)
	{
		return data[index];
	}
};

int main()
{
	Person a(21);
	Person b(a);

	cout << " a : " << a.Getage() << " b : " << b.Getage() << endl;

	vector<int> original = { 1, 2, 3 };
	vector<int> shallowCopy = original;
	shallowCopy[0] = 10;
	std::cout << "Original: " << original[0] << std::endl;

	cout << " ���� ����" << endl;
	MyArray arr1(10);
	arr1.SetValue(0, 40);
	
	MyArray arr2(arr1);

	cout << "og : " << arr1.GetValue(0) << endl;
	cout << "copy : " << arr2.GetValue(0) << endl;

	arr1.SetValue(0, 100);
	cout << " og = 100" << endl;

	cout << "og : " << arr1.GetValue(0) << endl;
	cout << "copy : " << arr2.GetValue(0) << endl;

	cout << endl;

	cout << " ���� ����" << endl;
	MyArray2 arr2_1(10);
	arr2_1.SetValue(0, 40);

	MyArray2 arr2_2(arr2_1);

	cout << "og : " << arr2_1.GetValue(0) << endl;
	cout << "copy : " << arr2_2.GetValue(0) << endl;

	arr2_1.SetValue(0, 100);
	cout << " og = 100" << endl;

	cout << "og : " << arr2_1.GetValue(0) << endl;
	cout << "copy : " << arr2_2.GetValue(0) << endl;



	return 0;
}