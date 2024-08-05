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

class Character
{
private:
	int* data;
public:
	Character(int size); // ������
	~Character(); // �Ҹ���
};

int main()
{
	Character* cla = new Character(20);

	delete cla;

	return 0;
}

Character::Character(int size)
{
	data = new int[size];
	cout << "������ ȣ��" << endl;
}

Character::~Character()
{
	delete[] data;
	data = nullptr;


	cout << "�Ҹ��� ȣ��" << endl;
}
