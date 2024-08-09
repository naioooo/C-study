#include <iostream>
#include <vector>
#include <list>
#include <map>

using namespace std;

#pragma region List 
/*
����Ʈ
 ������ �����̳ʷ�, ������ �����ϴ� �����Դϴ�.
 ���� ���� ����Ʈ(doubly linked list)�� �����Ǿ� �־��.
 ����(sort), ����(merge), �̾���̱�(splice)�� ���� ��� �Լ��� �����մϴ�1.

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

������:
 ���� (Vector):
  ���ʹ� ���ӵ� �޸� �ּҸ� ���� ���� �迭(dynamic array) ������ �ڷᱸ���Դϴ�1.
  �����͸� ���������� �����ϸ�, �ε����� ������ ������ �� �ֽ��ϴ�.
  ��Ҹ� ���� �����ϰų� ������ �� ȿ�����Դϴ�.
  ���� ������ �����ϸ�, �޸� Ȯ��/��Ұ� �����մϴ�.
 ����Ʈ (List):
  ����Ʈ�� �� ������ ���� �ִ� ��尡 �����Ǿ� �ְ�, 
   ��尡 ���� �ε����� �� �ٸ� ��带 ����Ű�� �����Դϴ�2.
  ���Ϳ� �޸� position ������ ������ ��ҿ� �����մϴ�. 
   �̶� position�� �ش� ��ü�� ��ġ�� ����Ű�� ��������, �����ͷ� ������ �� �ֽ��ϴ�.
  �߰��� ��Ҹ� �����ϰų� ������ �� ���ͺ��� ������ �����ϴ�.
  ��� ���� ���Ḹ �����ٰ� �����ϸ� �Ǳ� ������, ���� ������ �Ұ����մϴ�.
*/
#pragma endregion

#pragma region Map
/*
Map
 ���� �����̳��߿� ���ֻ��
 key, value�� ������ ������ �ִ�
 key���� �����̳ʿ� �ߺ����� �Ұ�
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
	m.insert(map<string, int>::value_type("ȣ����", 7));
	/*
	pair 
	�ΰ��� �ٸ� Ÿ���� �ѹ��� ����
	�۽�Ʈ ������
	*/	
	m.insert(make_pair("�޽�", 10));
	m["das"] = 1;

	print_map(m);

	map<string, int> m2;
	m2.insert(pair<string, int>("���", 7));
	m2.insert(pair<string, int>("��������", 9));

	m2.insert({ "�θ޷�", 3 });

	auto iter = m2.find("���");
	if (iter == m2.end())
	{
		cout << "���µ�" << endl;
	}
	else
		cout << iter->first << " " << iter->second << endl;

	cout << m2.count("���") << endl;

}