#include <iostream>
#include <vector>
#include <set>

using namespace std;

#pragma region STL
/*
STL Standard Template Library

STL (표준 템플릿 라이브러리)란?
 STL은 Standard Template Library의 약자로,
 C++ 프로그래밍에서 자주 사용되는 템플릿 클래스들의 모음입니다.
 컨테이너, 알고리즘, 반복자 등의 구성 요소를 제공하여 프로그래밍을 간편하게 만들어줍니다.
 STL은 일반화된 라이브러리이며, 그 구성 요소들은 매개변수화되어 있습니다.
 즉, 다양한 데이터 타입에 적용할 수 있습니다.

컨테이너
 객체를 보관하는 객체. 클래스 템플릿 형태로 구현이 되어있음
 각각의 원소에 접근할 수 있도록 다양한 멤버함수를 제공
 접근하는 방법은 직접 함수를 호출하거나 반복자(iterator)라는 것을 이용해 접근

반복자
 **STL (표준 템플릿 라이브러리)**에서 클래스 내부에 만들어진, 
 컨테이너 안의 데이터를 가리키는 일종의 포인터
 컨테이너에 저장된 원소를 순회하면서 접근하는 방법을 제공, 
 컨테이너와 알고리즘을 하나로 동작하게끔 중간에서 인터페이스 역할
 
알고리즘 (Algorithms):
 정렬, 삭제, 검색, 연산 등을 해결하는 일반화된 방법을 제공하는 함수 템플릿

시퀀스 컨테이너 
 컨테이너 원소가 자신만의 삽입위치를 가지는 컨테이너
 vector list deque

연관 컨테이너 
 저장원소가 삽입순서와 다르게 특정 정렬기준에 의해 서장
 set map

vector 
 순차적으로 저장 내부적으로 동적배열을 사용해서 크기를 자동으로 조정한다
 인덱스를 통해 임의의 원소에 접근

at(idx):
 at() 메서드는 인덱스 idx에 해당하는 원소를 참조합니다.
 범위를 벗어난 경우 out_of_range 예외를 발생시킵니다.
operator[]:
 **operator[]**는 인덱스 idx에 해당하는 원소를 참조합니다.
 범위를 벗어난 경우 정의되지 않은 동작을 수행합니다.
front():
 첫 번째 원소를 참조합니다.
back():
 마지막 원소를 참조합니다.
clear():
 모든 원소를 제거합니다. 메모리는 그대로 유지됩니다.
push_back(m):
 마지막 원소 뒤에 원소 m을 삽입합니다.
pop_back():
 마지막 원소를 제거합니다.
begin():
 첫 번째 원소를 가리키는 반복자를 반환합니다.
end():
 마지막 원소의 다음을 가리키는 반복자를 반환합니다.
size():
 원소의 개수를 반환합니다.
capacity():
 할당된 메모리 공간의 크기를 반환합니다.
resize(n):
 크기를 n으로 변경합니다. 더 커졌을 경우 기본값인 0으로 초기화됩니다.
swap(v1):
 v1과 원소 및 capacity를 교환합니다.
erase(iter):
 iter가 가리키는 원소를 제거합니다. Size만 줄어들고 capacity는 그대로 유지됩니다.
empty():
 벡터가 비었으면 true를 반환합니다.
*/
#pragma endregion

int main()
{
	vector<int> v1;
	vector<int> v2(10);
	vector<int> v3(10, 5);
	vector<int> v4 = { 1,2,3,4,5,6,7,8,9,10 };
	v2.reserve(20);

	cout << "벡터의 사이즈 : " << v1.size() << endl;
	cout << "벡터의 사이즈 : " << v2.size() << endl;
	cout << "벡터의 사이즈 : " << v3.size() << endl;
	cout << "벡터의 사이즈 : " << v4.size() << endl;
	cout << endl;


	cout << "벡터의 capacity : " << v1.capacity() << endl;
	cout << "벡터의 capacity : " << v2.capacity() << endl;
	cout << "벡터의 capacity : " << v3.capacity() << endl;
	cout << "벡터의 capacity : " << v4.capacity() << endl;


	vector<int> v5;
	v5.push_back(1);
	v5.push_back(2);
	v5.push_back(3);
	v5.push_back(4);
	v5.push_back(5);

	for (int i = 0; i < v5.size(); ++i)
	{
		cout << v5[i] << endl;
	}

	cout << endl;
	for (auto& n : v5)
	{
		n++;
	}
	for (int i = 0; i < v5.size(); i++)
	{
		cout << v5[i] << endl;
	}

	vector<int> myVector = { 1, 2, 3,3,3 };

	// 범위 rg에 있는 원소들을 역순으로 추가
	vector<int> rg = { 4, 5, 6, 7 };
	myVector.assign_range(rg);

	// 벡터의 내용 출력
	cout << "myVector: ";
	for (const auto& elem : myVector) {
		cout << elem << " ";
	}
	cout << endl;
	//cout << rg.get_allocator() <<endl;
	

	vector<int> v8 = { 1,2,3,4,5,6,7,8 };
	vector<int>::iterator iter = v8.begin();

	for (size_t i = 0; i < v8.size(); i++)
	{
		cout << *iter + i << " ";
	}
	cout << endl;

	cout << endl;
	multiset<int> myset = { 3, 1, 4, 1, 5, 9, 2, 6, 5 };

	iter <=> iter;
	cout << *myset.lower_bound(1) << endl;
	for (auto s : myset)
	{
		cout << s << " ";
	}
}