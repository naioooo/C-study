#include <iostream>

using namespace std;

#pragma region �Ҹ���
/*
�Ҹ���(Destructor)
 ��ü�� �Ҹ�� �� �ڵ����� ȣ��Ǵ� ����Լ�
 �Ű������� ���� �� ���� ��ȯ ���� ���� �����ε� �Ұ���

�Ҹ����� Ư¡
 �ڵ� ȣ��: ��ü�� ������ ����ų� delete Ű����� ������ �� �ڵ����� ȣ��˴ϴ�.
 �̸� ��Ģ: Ŭ���� �̸� �տ� ����ǥ(~)�� �ٿ��� �����մϴ�.
 �Ű����� ����: �Ҹ��ڴ� �Ű������� ���� �� �����ϴ�.
 ->��ȯ�� ����: �Ҹ��ڴ� ��ȯ���� ���� �� �����ϴ�.

*/
#pragma endregion

class MyClass
{
private:
	int* data;
public:
	MyClass(int size); // ������
	~MyClass(); // �Ҹ���
};

int main()
{
	MyClass* cla = new MyClass(20);

	delete cla;

	return 0;
}

MyClass::MyClass(int size)
{
	data = new int[size];
	cout << "������ ȣ��" << endl;
}

MyClass::~MyClass()
{
	delete[] data;
	data = nullptr;


	cout << "�Ҹ��� ȣ��" << endl;
}
