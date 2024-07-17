#include <iostream>
#include <time.h>

using namespace std;
using std::cin;
using std::cout;
using std::endl;

//#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

// using ������ : ������ ���ӽ����̽��� ��� ��Ī�� �� ������ �ִ� �������� ������ �Ҽ��������� ����ϰڴ�

namespace A
{
	namespace B
	{
		namespace C
		{
			int num;
		}
	}
}
namespace ABC = A::B::C;

#pragma region �ڷ��� + ���� ����
/*

 - �ڷ���
  ������ ������ �ǹ��ϸ� ���� �ڷ���(data type)�̶�� �����ϸ� �ȴ�.

 - ������

 1. ���� �� �ִ� ���ڳ� �����͸� �ǹ�
 2. ��ǻ�ͷ� �Ͽ��� ���� ������ �� �ִ� �޸� ������ �ٴ� �̸��̴�
 3. ������ �̿��ϸ� Ư�� ���� ������ �ش� ���� �̿��� �������� ������ ����

 - �ڷ����� ����

 ������(�Ҽ����� ���� ���� ǥ���ϱ� ���� �ڷ���)
  int               4����Ʈ 			    -2,147,483,648 ~ +2,147,483,647
  unsigned int      4����Ʈ 			    0 ~ +4,294,967,295
  short             2����Ʈ             -32,768 ~ +32,767
  unsigned short    2����Ʈ 			    0 ~ +65,535
  long              4~8����Ʈ 		   -2,147,483,648 ~ +2,147,483,647
  longlong          8����Ʈ			   -9,223,372,036,854,775,808 ~ +9,223,372,036,854,775,807

 �Ǽ���(�Ҽ����� �����ϴ� ���� ǥ���ϴ� �ڷ���)
  float             4����Ʈ              ��3.4x10^-37 ~ ��3.4x10^+38
  double			8����Ʈ			    ��1.7x10^-307 ~ ��1.7x10^+308
  decimal -> c#�� �ִ� �ڷ���

 ������(���ڸ� ǥ���ϱ� ���� �ڷ���)
  char              1����Ʈ             -128 ~ +127 

 ����(��/������ �Ǻ��ϴ� �ڷ���)
  bool 1����Ʈ 0��1 �� ��Ÿ���� �ڷ���
  bool �ڷ����� ������ �;� �� ��ġ�� ���ԵǸ� ���� 1�� 0���� ��ȯ�� �� �� ������ �ǹ������ʴ´�

 �⺻������ c���� ������ �ش��ϴ� ������ �ڷ����� ������
 �׷��� 0�� ���� 0�� �ƴϸ� ������ ����
 C++���� true / false �� �߰��Ǿ��� -> ����� c���� bool ���� stdbool.h 
 
 unsigned(���) signed(����)
 c/c++ �ڷ����� ������ ǥ���ϴ� ���� ���������� ��쿡 ���� ������ ǥ�������ʴ� ��� ����� ��ũ���ϴ� ����� ����
 




 - ���� ����
 ���� �����ϴ� �޸� ������ �̸��� �����ϴ� ���� �ǹ��Ѵ�

 �⺻ ���� -> ���� ����(����) ������
  ex) int number; -> number ��� �̸����� �޸� ������ �Ҵ�
  ex) int number = 20; -> ���� ����� ���ÿ� number�� �ǹ��ϴ� �޸� ������ 20�� �־��

*/
#pragma endregion

int main()
{
	/*
	A::B::C::num;
	ABC::num;

	cout << endl;

	int num;

	int testA = true;
	int testB = false;
	int testsum = testA + testB;

	cout << "boolean : " << testsum << endl;

	cout << endl;

	// ���� �ʱ�ȭ 
	int X;
	X = 10;

	int A = 3;
	int B = 6;
	int sum;

	int C;
	int D;
	int E;
	int F, G, H;
	F = G = H = 100;
	
	//sizeof() Ű������ �� ������ ���� �Ǵ� �ڷ����� ũ�⸦ ����ϴ� ��
	cout << "���� ������ " << sizeof(1) << endl;
	cout << "���� ������ " << sizeof(2) << endl;
	cout << "true ������ " << sizeof(true) << endl;
	cout << "false ������ " << sizeof(false) << endl;
	cout << "false ������ " << sizeof(long long) << endl;


	cout << endl;
	
	int nValue = 0;

	cout << "���� �Է�" << endl;
	cin >> nValue;

	cout << "���� �Է��� ���� : " << nValue << endl;

	printf("���� �Է� : ");
	scanf("%d", &nValue);

	printf("%d", nValue);
	
	cout << endl;
	
	short V_A = 10;
	int V_B = 20;
	long V_C = 30;
	long long V_D = 40;

	cout << "C++ Short : " << V_A << ", " << "������ : " << sizeof(V_A) << endl;
	cout << "C++ int : " << V_B << ", " << "������ : " << sizeof(V_B) << endl;
	cout << "C++ long : " << V_C << ", " << "������ : " << sizeof(V_C) << endl;
	cout << "C++ long long : " << V_D << ", " << "������ : " << sizeof(V_D) << endl;

	printf("C ��� short : %d, %d \n", V_A, sizeof(V_A));
	printf("C ��� int : %d, %d \n", V_B, sizeof(V_B));
	printf("C ��� long : %d, %d \n", V_C, sizeof(V_C));
	printf("C ��� long long : %d, %d \n", V_D, sizeof(V_D));
	*/
	/*
	���� ǥ���

	1. �밡����
	 - ���������� �ڵ��� �� ���� ���� ǥ���
	 - �� ������ � �������� �˱� ���Ͽ� ���� ����ϵ��� �տ� �� �������°� ���ϴ� ���ڸ� ���δ�
	 - ���� ����Ƽ�� �ڵ� ��Ŀ��� ���� ������ �ʴ´� -> ��ü�����̱� ����
	 EX) int num => nNum
	     float ValueA => fValueA;
	     double ValueA => dValueA;
	     char ValueA => chValueA;

	2. ī��
	 - ��ü�������� ����� �ڵ����� ��ȯ�ϸ鼭 �������� ì�� ǥ���
	 
	 EX) int playerselectnum -> playerSelectNum

	3. �Ľ�Į ���̽�
	 EX) int playerselectnum -> PlayerSelectNum

	4. ������ũ
	 EX) int playerselectnum -> Player_Select_Num

	5. ����
	 EX) int playerselectnum -> PlSelN

	 ���� �̸��� Ư¡
	 1. �⺻�����Τ� ������ �̸��� ���ĺ� ���ڷ� ����
	 2. C���� ��ҹ��� �����ϸ� �ٸ�����

	 a. ������ ���ڷν����� �� ����
	 b. Ű���� ���� ������ ���ȵ�
	 c. �̸����̿� ������� �ȵȴ�

	*/
     
/*
    srand(time(NULL));

	int numR;
	numR = rand() % 50;
	cout << numR << endl;

	
	*/
	// 20 ~ 25
	int weaponA = 0;
	weaponA = rand() % 6 + 20;
	cout << "������ ���ݷ��� : " << weaponA << endl;

	return 0;
}


/*
����1 �����ϴ� ĳ���� ���

- �÷�Ǯ�ϰ� ���
- 50 x 50

����2. ������ ������ �����

- ������ ������ ������ �ٸ� ����� �� 5�� ����� ȭ�鿡 ���
- ��µ� ȭ�鿡�� ������ ������ ���� ���� + Ư���� �Բ� ����
- ���� 1�� + �� 1������ �ݵ�� ��Ʈ�� �����ؾ��Ѵ�

����3. ���� ���� ���

- 1 ~ 5������ ���� ����
- 6 ~ 19������ ���� ����
- 23 ~ 189������ ���� ���� -> ����� �ɶ� �ּ� �ִ밪 ���

���� ���� - �ݺ��� + ������
- �ݺ����� ���� + �������� ����
- ��Ʈ�� �ʱ�

*/