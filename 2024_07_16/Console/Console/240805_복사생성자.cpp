#include <iostream>
#include <vector>

using namespace std;

#pragma region 복사생성자
/*
복사 생성자
 동일한 클래스의 객체를 복사해서 생성할 때 사용하는 생성자

얕은 복사 (Shallow Copy)
 특징: 얕은 복사는 객체의 참조(메모리 주소)만 복사합니다. 
       따라서 원본 객체와 복사된 객체가 동일한 메모리 주소를 가리키게 됩니다.
 장점: 빠르고 메모리 효율적입니다.
 단점: 원본 객체나 복사된 객체 중 하나가 변경되면, 다른 하나도 영향을 받습니다.
 
 멤버 변수가 포인터면 포인터의 주소값을 복사 -> 같은 메모리 영역 가리킨다
 만약 객체에서 메모리를 수정하면 영향을 받는다
 두객체가 같은 메모리 주소를 사용하여 만약 소멸하면서 메모리 해제를 한다면
 다른 객체는 유효하지 않은 데이터를 가지게 되어 문제가 된다

깊은 복사 (Deep Copy)
 특징: 깊은 복사는 객체의 모든 필드를 복사하여 새로운 객체를 생성합니다.
       따라서 원본 객체와 복사된 객체가 독립적인 메모리 공간을 가지게 됩니다.
 장점: 원본 객체와 복사된 객체가 독립적이므로, 한 객체의 변경이 다른 객체에 영향을 미치지 않습니다.
 단점: 메모리와 시간이 더 많이 소요됩니다.
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
	// 깊은 복사
	MyArray2(const MyArray2& other)
	{
		size = other.size;
		data = new int[size]; // 공간할당
		// 데이터 복사
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

	cout << " 얕은 복사" << endl;
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

	cout << " 깊은 복사" << endl;
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