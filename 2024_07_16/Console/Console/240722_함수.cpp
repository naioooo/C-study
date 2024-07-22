#include <iostream>
#include <string>
// -> stl string �޸� ����̳� ���ڿ��� �ٷ� �� �ִ� �Լ��� ����
// char
#include <wchar.h> // wide character
// -> �����ڵ� ���ڸ� �����ϴµ� ��� / �پ��� ���� ���ڸ� ǥ��

using namespace std;

/*
�Լ��� �޼ҵ�  ������
������: 
 �Լ��� ���������� ������ �� ������, 
 �޼ҵ�� �ݵ�� Ŭ������ ��ü�� ���ؾ� �մϴ�.
ȣ�� ���: 
 �Լ��� �̸����� ȣ�������, 
 �޼ҵ�� ��ü�� ���� ȣ��˴ϴ�.
����: 
 �Լ��� �Ϲ������� Ư�� �۾��� �����ϴ� �� ���Ǹ�, 
 �޼ҵ�� ��ü�� ���¸� �����ϰų� ��ü�� ���õ� �۾��� �����մϴ�
*/

#pragma region �Լ�
/*

�Լ�
 ������ ���α׷����� ��ǥ ����
 like ����� ���Ǳ�

 �Լ��� ����ϴ� ����
  �ߺ� ���� ����
  ���� ����
  ������ ���
  ����

 �Լ��� �����ϴ� ���
  ��ȯ �ڷ��� �Լ� �̸�( �Է� �ڷ��� / ���� �μ���� �θ���)
  { ����
    �Լ��� ����
  } ��

  ex)
  void main()
  {
  }

 �Լ� �̸� : �Լ��� ������ �� ���Ǵ� �Լ��� �̸� 
 ���� : �Լ��� �ؾ� �� ���� ���λ����� �����ϸ� �Լ��� �۾� �Ÿ�
 ��ȯ �ڷ��� : �Լ��� �����ϴ� ���� ��������, �Լ��� �۾� ���
 �Լ� ���� : {} �ȿ� �Լ��� �����ڵ�
 
 �Լ��� �̸��� �⺻������ �����ؾ��Ѵ�
  ������ �̸��� �Լ��� 2�� �̻� �����ϴ� ���� �Ұ���
 
 void�� �Լ���?
  ����(��ȯ) ���� ���� �Լ�
  �Լ��� �Է� �Ǵ� ����� ������� void Ű���带 ���� ����� ���� ���� ���

 �Լ��� ������ �⺻������ ���� �Լ� ���ʿ� ����

 C/C++���� �Լ� ������ �ʿ��� ����
  C/C++ ��� �����Ϸ��� �⺻������ ������ �Ʒ��� �ؼ�
  �����Ϸ��� ���� ������ ���� �Լ��� ȣ���� ��� ���� �߻�
  �׷��� �Լ��� ������ ���� �Լ��� ����� ������ ��ġ�� �˷�����Ѵ�
  ����� ���ǰ� �� ���Ͽ� ������ �ʿ�� ����
  �Լ� ������ �ߺ��� ���������� ���Ǵ� �����ؾ��Ѵ�
 
 �Ծ�
  ����Ƽ�� -> ī��� / ��뿣�� -> �Ľ�Į ���̽� 
 



*/
#pragma endregion

//�Լ� ����
void OutputValueA();

// ��Ʈ���� ������ ���ϰ� x
void OutputValueB(int numA);
void OutputValueC(int numA, int numB);

// ���ڿ� ��ȯ 
void OutputString(string str);
string GetStringFunc(string strA, string strB);
int CheckingString(string strA, string strB);

//��ȯ ���� ����
int GetAddValue(int numA, int numB);
int GetSubValue(int numA, int numB);
int GetMultipleValue(int numA, int numB);
int GetDivideValue(float numA, float numB);

//void EnemyAttack();

namespace NS_A
{
	void EnemyAttack()
	{
		cout << "���� �ٷ� NS_A �Լ�" << endl;
	}
}

namespace NS_B
{
	void EnemyAttack()
	{
		cout << "���� �ٷ� NS_B �Լ�" << endl;
	}
}

int main()
{

	cout << endl;

	OutputValueA();
	OutputValueB(5);
	OutputValueC(1,9);

	OutputString("����");

	int nResultA = GetAddValue(18, 45);

	//���� ���·�
	OutputValueB(nResultA);

	string sResultB = GetStringFunc("�̷�", "�ƴ�");
	OutputString(sResultB);

	nResultA = CheckingString("�ʹ� ����", "���� ������");
	OutputValueB(nResultA);

	cout << endl;

	int numL = 0;
	int numR = 0;

	cout << "���� 2�� �Է�" << endl;

	cin >> numL >> numR;

	printf("%d + %d = %d\n", numL, numR, GetAddValue(numL, numR));
	printf("%d - %d = %d\n", numL, numR, GetSubValue(numL, numR));
	printf("%d * %d = %d\n", numL, numR, GetMultipleValue(numL, numR));
	printf("%d / %d = %d\n", numL, numR, GetDivideValue(numL, numR));

	/*
	 ��ó�� �Լ��� �پ��� ������ ���� �� �ִ�
	 C/C++ ��� �Լ� ����
	  �Է� o ��� o
	  �Է� o ��� x
	  �Է� x ��� o
	  �Է� x ��� x

	 ex)
	 void ShowInfo(int Age, char Name);
	 int GetRandomValue(void);
	 void SomeFunc(void);
	*/

	return 0;
}

// ������ ����� �����Ͱ� ������ �Լ���� ������ �� �ִ�
// ���� C/C++���� �Լ� ������ �����ϱ� ������ ��ɹ� �ۼ��� ���ؼ� �Լ��ȿ� �ۼ��ؾ��Ѵ�
void OutputValueA()
{
	cout << "���� �Լ���" << endl;
}

void OutputValueB(int numA)
{
	cout << numA << endl;
}

void OutputValueC(int numA, int numB)
{
	cout << numA << numB <<endl;
}

void OutputString(string str)
{
	cout << str << endl;
}

string GetStringFunc(string strA, string strB)
{
	// �Լ��� return�̶� Ű���带 ���� ���� �Ǵ� ���ϰ� ��ȯ
	// �Լ��� ������� �ϳ��� ����� ��ȯ

	//string�� ���ڿ��� �ٷ� �� �ִ� �پ��� ����� ����
	cout << strA + strB << endl;
	return strA + strB;
}

int CheckingString(string strA, string strB)
{
	return strA == strB;
}

int GetAddValue(int numA, int numB)
{
	return numA + numB;
}

int GetSubValue(int numA, int numB)
{
	return numA - numB;
}

int GetMultipleValue(int numA, int numB)
{
	return numA * numB;
}

int GetDivideValue(float numA, float numB)
{
	return numA / numB;
}





/*


�̹��� ����
���� ���� - ���ڿ� ���� �׽�Ʈ
 �޾�� 

 <���� ����>
 c++���� Ǯ�� ��ĭ�� �˸°� ä����
 C ��Ÿ�� ���̺귯�� / STL���̺귯�� �Լ� ��� ����
 STL string ������
 �ش� ����� ���� �� �׷��� �ۼ��ߴ��� �ּ� �ۼ�

 ���� �־��� ���ڿ��� �ܾ� ������ ������ ������ ����Ͻÿ�
  �Է°� : HELLO WOLRD THIS IS PEARL ABYSS
  ��ȯ�� : PEARL ABYSS IS THIS WOLRD HELLO

  �Է� ���ڿ��� ������ ����
  ������ ��ĭ���� ���еȴٰ� ����

  
*/

void ReverseWords(char* output, int outputArraySize, const char* input)
{
	// ä����
}
// �ۼ��� ������ �ð����⵵�� ����ϴ� ���� ������ �Լ��� ���� �ֱ׷��� �ߴ��� �ۼ�