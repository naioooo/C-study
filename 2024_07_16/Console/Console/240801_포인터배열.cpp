#include <iostream>

using namespace std;

#pragma region ������ �迭
/*

Call by Value : ���� ���� ����
����: ������ ���� �����Ͽ� �Լ��� �����մϴ�.
Ư¡: �Լ� ���ο��� �Ű������� ���� �����ص� ���� ������ ������ ������ ��ġ�� �ʽ��ϴ�.

Call by Reference : 
����: ������ �޸� �ּҸ� �����Ͽ� �Լ��� ���� �����͸� ���� ������ �� �ְ� �մϴ�.
Ư¡: �Լ� ���ο��� �Ű������� ���� �����ϸ� ���� ������ ���� ����˴ϴ�.




*/


#pragma endregion

void Value(int x) {
	x = 10; // x�� ���� �����
	cout << "x�� �� " << x << endl;
}

//������ ���� ȣ��
// �Լ� ȣ��� �μ��� ������ �ּҸ� �����ϴ� ���
// �Լ��� �Ű������� ���� ������ ���� ���� �μ��� ���� ���� ��������
// ���� �����ϴ� ��� �ּҸ� ���� -> �޸� ����ȿ���� ����
// ����ü�� Ŭ������
void Address(int* x)
{
	*x = 10;
	cout << "x�� �� " << *x << endl;
}

void Reference(int& x) {
	x = 20; // x�� ����Ű�� ���� ���� �����
	cout << "x�� �� " << x << endl;
}

// �����´� ������ �ƴ϶� ������ �����̴�
// �Լ� �������� ���� �����̵ǰ� main������ ������ ���� �ʴ´�
void Swap(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
}

void SwapAddress(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void SwapReference(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

int main()
{
	int arr[10] = { 1,2,5,4,5,6,7,8,9,10 };

	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << " ";
		cout << &arr[i] << endl;
	}
	cout << endl;

	// �迭�� �������� ����
	// �����ͷε� �迭 ���ҿ� ������ ������
	// �迭 ���� �κ��� ����Ű�� ������ �迭�� �����ϰ�
	// �����Ϳ� 1�� ���ϸ� ���� ���Ҹ� ����Ű�� �ȴ�

	int* parr;
	parr = &arr[0]; // �����͸� �迭�� ù��° ����� �ּҸ� ����
	
	for (int i = 0; i < 10; i++)
	{
		cout << *(parr + i) << " ";
	}

	cout << endl;
	int x = 5;

	
	Value(x);
	cout << "Value" << endl;
	cout << "x�� �ּҰ� " << &x << endl;
	cout << "x�� �� " << x << endl;
	cout << endl;

	Address(&x);
	cout << "Address" << endl;
	cout << "x�� �ּҰ� " << &x << endl;
	cout << "x�� �� " << x << endl;
	cout << endl;

	Reference(x);
	cout << "Reference" << endl;
	cout << "x�� �ּҰ� " << &x << endl;
	cout << "x�� �� " << x << endl;
	cout << endl;


	int num1 = 10;
	int num2 = 20;
	
	Swap(num1, num2);
	cout << "Swap" << endl;
	cout << "1�� �� " << num1 << " 2�� �� " << num2 << endl;
	cout << endl;
	SwapAddress(&num1, &num2);
	cout << "SwapAddress" << endl;
	cout << "1�� �� " << num1 << " 2�� �� " << num2 << endl;
	cout << endl;
	SwapReference(num1, num2);
	cout << "SwapReference" << endl;
	cout << "1�� �� " << num1 << " 2�� �� " << num2 << endl;
	cout << endl;


	/*
	void ������
	 �ڷ����� ���� ������ ����
	 �ڷ����� ������ ���� �ʰ� � �ڷ����� �ּҵ� ���尡��]
	 ���� �����Ϸ��� ������ ����ȯ �ؾ���

	*/

	void* vp = nullptr;
	int i = 3;
	double d = 3.1f;

	vp = &i;

	cout << *(int*)vp << endl;
	cout << vp << endl;
	cout << &vp << endl;
}

/*

c -> malloc free
c++ -> new delete

������ �������ͷ� ����


����
 1. �����Ҵ�� �����Ҵ��� ������
 2. Ŭ������ �����ΰ�
  ��ǥ
 3. ����ü�� Ȱ���� �л� ���� ����ϱ�
  �л� ������ ����ϴ� �Լ� 
  �л� ������ �߰��ϴ� �Լ�
  ����������� �Ͻÿ�
*/