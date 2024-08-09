#include <iostream>
#include <vector>
#include <list>
#include <map>

using namespace std;

#pragma region List 
/*
리스트
 시퀀스 컨테이너로, 순서를 유지하는 구조입니다.
 이중 연결 리스트(doubly linked list)로 구현되어 있어요.
 정렬(sort), 병합(merge), 이어붙이기(splice)와 같은 멤버 함수를 제공합니다1.

push_back
push_front
pop_back
pop_front
insert
erase
clear
size
front
back

차이점:
 벡터 (Vector):
  벡터는 연속된 메모리 주소를 가진 동적 배열(dynamic array) 형태의 자료구조입니다1.
  데이터를 연속적으로 저장하며, 인덱스로 빠르게 접근할 수 있습니다.
  요소를 끝에 삽입하거나 삭제할 때 효율적입니다.
  랜덤 접근이 가능하며, 메모리 확장/축소가 가능합니다.
 리스트 (List):
  리스트는 힙 공간에 값이 있는 노드가 생성되어 있고, 
   노드가 다음 인덱스의 또 다른 노드를 가리키는 구조입니다2.
  벡터와 달리 position 정보를 가지고 요소에 접근합니다. 
   이때 position은 해당 객체의 위치를 가리키는 개념으로, 포인터로 구현될 수 있습니다.
  중간에 요소를 삽입하거나 삭제할 때 벡터보다 성능이 좋습니다.
  노드 간의 연결만 끊었다가 연결하면 되기 때문에, 랜덤 접근이 불가능합니다.
*/
#pragma endregion

#pragma region Map
/*
Map
 연관 컨테이너중에 자주사용
 key, value를 쌍으로 가지고 있다
 key값은 컨테이너에 중복저장 불가
*/
#pragma endregion

template <typename T>
void print_container(T t)
{
	for (auto& n : t)
	{
		cout << n << " ";
	}

	cout << endl;
}

void print_map(map<string, int> m)
{
	for (auto& n : m)
	{
		cout << n.first << ",  " << n.second << endl;
	}

	cout << endl;
}

int main()
{
	list<int> l = {1, 2, 3, 4};
	l.push_back(5);

	print_container(l);
	l.push_front(0);
	print_container(l);
	
	map<string, int> m;
	map<string, int>::iterator it;
	m.insert(map<string, int>::value_type("호날두", 7));
	/*
	pair 
	두개의 다른 타입을 한번에 저장
	퍼스트 세컨드
	*/	
	m.insert(make_pair("메시", 10));
	m["das"] = 1;

	print_map(m);

	map<string, int> m2;
	m2.insert(pair<string, int>("흥민", 7));
	m2.insert(pair<string, int>("히샬리송", 9));

	m2.insert({ "로메로", 3 });

	auto iter = m2.find("흥민");
	if (iter == m2.end())
	{
		cout << "업는데" << endl;
	}
	else
		cout << iter->first << " " << iter->second << endl;

	cout << m2.count("흥민") << endl;

}