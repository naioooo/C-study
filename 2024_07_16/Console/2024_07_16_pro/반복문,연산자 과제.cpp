#include <iostream>
#include <windows.h>
#include<math.h>

using namespace std;

/*
 ����

 1. ������ ����
 - 3�� �ݺ��� �̿��ؼ� ����
 - for / while / dowhile

 */

void gugudan()
{
	// for��
	cout << "for ���� �̿��� ������ " << endl;
	int i = 1;

	for (; i < 4; i++)
	{
		cout << i << "�� " << endl;
		for (int j = 1; j < 10; j++)
		{
			cout << i << " * " << j << " = " << i * j << endl;
		}
		cout << endl;
	}

	// while��
	cout << "while ���� �̿��� ������ " << endl;

	while (true)
	{
		if (i > 6)
			break;

		int j = 1;
		cout << i << "�� " << endl;

		while (true)
		{
			if (j > 9)
				break;

			cout << i << " * " << j << " = " << i * j << endl;
			j++;
		}

		i++;
		cout << endl;
	}

	// do ~ while��
	cout << "do ~ while ���� �̿��� ������ " << endl;

	do
	{
		int j = 1;
		cout << i << "�� " << endl;

		while (true)
		{
			if (j > 9)
				break;

			cout << i << " * " << j << " = " << i * j << endl;
			j++;
		}

		i++;
		cout << endl;
	} while (i < 10);
}

/*
 2. ������ Ȱ��
 - a. �ΰ��� ������ �޾Ƽ� �� ���� ������ ������ ����ϴ� ���α׷� �ۼ�
 - b. 3���� ����(num1, 2, 3)�� �޾Ƽ� ���� �������� ����� ����ϴ� ���α׷� �ۼ�
	   EX) (n1 + n2) * (n3 + n1) % n1 =?
 - c. �Է� ���� �� ������ �������� �� ��� �Ǵ� ��� �������� ����ϴ� ���α׷� �ۼ�
 */

void Use_operator()
{
	// a. �ΰ��� ������ �޾Ƽ� �� ���� ������ ������ ����ϴ� ���α׷� �ۼ�

	
	int a = 0;
	int b = 0;

	cout << "ù��° ������ �Է��Ͻÿ�" << endl;
	cin >> a;
	cout << endl;
	cout << "�ι�° ������ �Է��Ͻÿ�" << endl;
	cin >> b;
	cout << endl;

	cout << "�� ���� ������ " << a + b << " �̰� �� ���� ������ " << a - b << " �Դϴ�." << endl;
	cout << endl;
	

	// b. 3���� ����(num1, 2, 3)�� �޾Ƽ� ���� �������� ����� ����ϴ� ���α׷� �ۼ�

	
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;

	cout << "ù��° ������ �Է��Ͻÿ�" << endl;
	cin >> num1;
	cout << endl;
	cout << "�ι�° ������ �Է��Ͻÿ�" << endl;
	cin >> num2;
	cout << endl;
	cout << "����° ������ �Է��Ͻÿ�" << endl;
	cin >> num3;
	cout << endl;

	cout << " (n1 + n2) * (n3 + n1) % n1 = " << (num1 + num2) * (num3 + num1) % num1 << endl;
	cout << endl;
	

	// c. �Է� ���� �� ������ �������� �� ��� �Ǵ� ��� �������� ����ϴ� ���α׷� �ۼ�

	int c = 0;
	int d = 0;

	cout << "ù��° ������ �Է��Ͻÿ�" << endl;
	cin >> c;
	cout << endl;
	cout << "�ι�° ������ �Է��Ͻÿ�" << endl;
	cin >> d;
	cout << endl;

	cout << "num1���� num2�� �������� �� ���� " << c / d << "�̰� �������� " << c % d << "�Դϴ� " << endl;

}

 /*
 3. �ݺ��� ���
 - for / while / dowhile ��� ���
 - 1���� 20���� ����Ͻÿ� - ¦����
 - 20 ���� 1���� ����Ͻÿ�
	 */

void print_loop()
{
	int i = 0;
	// for��
	cout << "for ���� �̿��� ��� " << endl;

	cout << "1. 1���� 20���� ¦���� ��� " << endl;
	for (i = 2; i < 21; i += 2)
	{
		cout << i << " ";
	}
	cout << endl;
	cout << "2. 20 ���� 1���� ��� " << endl;
	for (int i = 20; i > 0; i-- )
	{
		cout << i << " ";
	}
	cout << endl;

	// while��
	cout << endl;
	cout << "while ���� �̿��� ��� " << endl;

	cout << "1. 1���� 20���� ¦���� ��� " << endl;	
	i = 2;
	while (i <= 20)
	{
		cout << i << " ";
		i += 2;
	}
	cout << endl;
	cout << "2. 20 ���� 1���� ��� " << endl;

	i = 20;
	while (i > 0)
	{
		cout << i << " ";
		i--;
	}
	cout << endl;

	// do~while��
	cout << endl;
	cout << "do~while ���� �̿��� ��� " << endl;

	cout << "1. 1���� 20���� ¦���� ��� " << endl;
	i = 2;
	do
	{
		cout << i << " ";
		i += 2;
	} while (i <= 20);
	cout << endl;
	cout << "2. 20 ���� 1���� ��� " << endl;

	i = 20;
	do
	{
		cout << i << " ";
		i--;
	} while (i > 0);
	cout << endl;
}
 
/*
 4. �ݺ��� ����
 - ���� �ϳ��� �Է� �޾� -5�� �ݺ������� ����Ǵ� ���� �����
	���� ���� - 15�� �Ѿ�� Ż��
	���� : �Է¹��� ���� -10 ~ 10 ������ ���ڿ����ϰ� �̿��� ���� �Է½� ���α׷� ����

	# ���ǽİ� �� �����ڸ� �� ���� ���ǽ��� ����� �ݺ����� ���ư��� �ϴ°��� ����Ʈ
*/

void master_loop()
{
	int num = 0;

	cout << " ���ڸ� �Է��Ͻÿ� (-10 ~ 10 ������ ����, �̿��� ���� �Է½� ����) " << endl;
	cin >> num;

	do
	{
		cout << "���� ���� : " << num << endl;
		num -= 5;
	} while (num <= 10 && num >= -15);
}


 /*
 5. �����
  ������ �Ǵ��� ȿ������ �ݺ������� ���
  *****
  ****
  ***
  **
  *

  *
  **
  ***
  ****
  *****
 */

void draw_star()
{
	for (int i = 5; i >= 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}

	for (int i = 1; i <= 5; i++)
	{
		for (int j = 0; j < i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}

	for (int i = 5; i > 0; i--)
	{
		for (int j = 5; j > i; j--)
		{
			cout << " ";
		}
		for (int j = 0; j < i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}

	for (int i = 5; i >= 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			cout << " ";
		}
		for (int j = 5; j > i; j--)
		{
			cout << "*";
		}
		cout << endl;
	}
}

/*
 6. ������ ���
  ���� : for�� 1�� + 1��
  ���� �̿ܿ��� ��� ����
*/

void draw_rhombus()
{
	for (int i = 0, j = 10; i < 10; i++, j--)
	{
		for (int k = 0; k < j; k++)
			cout << " ";
		for (int k = 0; k < i; k++)
			cout << "*";
		for (int k = 0; k < i; k++)
			cout << "*";
		for (int k = 0; k < j; k++)
			cout << " ";
		cout << endl;
	}
	for (int i = 0, j = 10; i < 10; i++, j--)
	{
		for (int k = 0; k < i; k++)
			cout << " ";
		for (int k = 0; k < j; k++)
			cout << "*";
		for (int k = 0; k < j; k++)
			cout << "*";
		for (int k = 0; k < i; k++)
			cout << " ";
		cout << endl;
	}

}

// ���� ���� ���ǹ� 
// ��Ʈ��  ����´�
// ������ ǥ�������Ѵ� ���ǹ��̶�..


int main()
{
	//���� 1
	//gugudan();

	//���� 2
	//Use_operator();

	//���� 3
	//print_loop();
	
	//���� 4
	//master_loop();

	//���� 5
	draw_star();

	//���� 6
	draw_rhombus();

	return 0;
}
