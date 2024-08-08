#include <iostream>
#include <vector>
#include <set>

using namespace std;

#pragma region STL
/*
STL Standard Template Library

STL (ǥ�� ���ø� ���̺귯��)��?
 STL�� Standard Template Library�� ���ڷ�,
 C++ ���α׷��ֿ��� ���� ���Ǵ� ���ø� Ŭ�������� �����Դϴ�.
 �����̳�, �˰���, �ݺ��� ���� ���� ��Ҹ� �����Ͽ� ���α׷����� �����ϰ� ������ݴϴ�.
 STL�� �Ϲ�ȭ�� ���̺귯���̸�, �� ���� ��ҵ��� �Ű�����ȭ�Ǿ� �ֽ��ϴ�.
 ��, �پ��� ������ Ÿ�Կ� ������ �� �ֽ��ϴ�.

�����̳�
 ��ü�� �����ϴ� ��ü. Ŭ���� ���ø� ���·� ������ �Ǿ�����
 ������ ���ҿ� ������ �� �ֵ��� �پ��� ����Լ��� ����
 �����ϴ� ����� ���� �Լ��� ȣ���ϰų� �ݺ���(iterator)��� ���� �̿��� ����

�ݺ���
 **STL (ǥ�� ���ø� ���̺귯��)**���� Ŭ���� ���ο� �������, 
 �����̳� ���� �����͸� ����Ű�� ������ ������
 �����̳ʿ� ����� ���Ҹ� ��ȸ�ϸ鼭 �����ϴ� ����� ����, 
 �����̳ʿ� �˰����� �ϳ��� �����ϰԲ� �߰����� �������̽� ����
 
�˰��� (Algorithms):
 ����, ����, �˻�, ���� ���� �ذ��ϴ� �Ϲ�ȭ�� ����� �����ϴ� �Լ� ���ø�

������ �����̳� 
 �����̳� ���Ұ� �ڽŸ��� ������ġ�� ������ �����̳�
 vector list deque

���� �����̳� 
 ������Ұ� ���Լ����� �ٸ��� Ư�� ���ı��ؿ� ���� ����
 set map

vector 
 ���������� ���� ���������� �����迭�� ����ؼ� ũ�⸦ �ڵ����� �����Ѵ�
 �ε����� ���� ������ ���ҿ� ����

at(idx):
 at() �޼���� �ε��� idx�� �ش��ϴ� ���Ҹ� �����մϴ�.
 ������ ��� ��� out_of_range ���ܸ� �߻���ŵ�ϴ�.
operator[]:
 **operator[]**�� �ε��� idx�� �ش��ϴ� ���Ҹ� �����մϴ�.
 ������ ��� ��� ���ǵ��� ���� ������ �����մϴ�.
front():
 ù ��° ���Ҹ� �����մϴ�.
back():
 ������ ���Ҹ� �����մϴ�.
clear():
 ��� ���Ҹ� �����մϴ�. �޸𸮴� �״�� �����˴ϴ�.
push_back(m):
 ������ ���� �ڿ� ���� m�� �����մϴ�.
pop_back():
 ������ ���Ҹ� �����մϴ�.
begin():
 ù ��° ���Ҹ� ����Ű�� �ݺ��ڸ� ��ȯ�մϴ�.
end():
 ������ ������ ������ ����Ű�� �ݺ��ڸ� ��ȯ�մϴ�.
size():
 ������ ������ ��ȯ�մϴ�.
capacity():
 �Ҵ�� �޸� ������ ũ�⸦ ��ȯ�մϴ�.
resize(n):
 ũ�⸦ n���� �����մϴ�. �� Ŀ���� ��� �⺻���� 0���� �ʱ�ȭ�˴ϴ�.
swap(v1):
 v1�� ���� �� capacity�� ��ȯ�մϴ�.
erase(iter):
 iter�� ����Ű�� ���Ҹ� �����մϴ�. Size�� �پ��� capacity�� �״�� �����˴ϴ�.
empty():
 ���Ͱ� ������� true�� ��ȯ�մϴ�.
*/
#pragma endregion

int main()
{
	vector<int> v1;
	vector<int> v2(10);
	vector<int> v3(10, 5);
	vector<int> v4 = { 1,2,3,4,5,6,7,8,9,10 };
	v2.reserve(20);

	cout << "������ ������ : " << v1.size() << endl;
	cout << "������ ������ : " << v2.size() << endl;
	cout << "������ ������ : " << v3.size() << endl;
	cout << "������ ������ : " << v4.size() << endl;
	cout << endl;


	cout << "������ capacity : " << v1.capacity() << endl;
	cout << "������ capacity : " << v2.capacity() << endl;
	cout << "������ capacity : " << v3.capacity() << endl;
	cout << "������ capacity : " << v4.capacity() << endl;


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

	// ���� rg�� �ִ� ���ҵ��� �������� �߰�
	vector<int> rg = { 4, 5, 6, 7 };
	myVector.assign_range(rg);

	// ������ ���� ���
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