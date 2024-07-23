#include <iostream>
#include <time.h>
#include <random>

using namespace std;

#pragma region �迭
/*
�迭�̶�
 ���� �ڷ����� ���� ���ӵ� �޸� �������� �̷���� �ڷᱸ��
 �̷� �迭�� ���� �ڷ����� ���� �������� ������ �ʿ��� �� ���
 ���� ���� �����͸� ó���� �� ����

�迭�� �����
 int(�ڷ���) arr(�迭�� �̸�) [32](�迭�� ũ��);

�迭�� �ʱ�ȭ
 1. ũ�⸦ ����ϰ� �ʱ�ȭ 
  EX) int arr[3] = {1, 2, 3};
 2. �迭�� ũ�⸦ �����ϰ� �ʱ�ȭ 
  EX) inat arr[] = {1, 2, 3};
 3. ũ�⸦ ��������� ���� �Ϻο�Ҹ� �ʱ�ȭ
  EX) int arr[5] = {1, 2, 3};
 

*/
#pragma endregion

void arr_gugudan();
void arr_sum();


// �迭
int main()
{

	int num[3] = {1, 2, 3};

	//�迭�� �ּҴ� �迭�� 0��° �����ּҿ� ����
	cout << "num[0]��° ������ : " << num[0] << endl;
	cout << "num[0]���� �ּҰ� : " << &num[0] << endl;
	cout << "num[1]��° ������ : " << num[1] << endl;
	cout << "num[1]���� �ּҰ� : " << &num[1] << endl;
	cout << "num[2]��° ������ : " << num[2] << endl;
	cout << "num[2]���� �ּҰ� : " << &num[2] << endl;

	cout << endl;

	// ������ �̿��� �迭 ���
	for (int i = 0; i < 3; i++)
	{
		cout << "num[" << i << "]��° ������ : " << num[i] << endl;
	}

	// ���� 10���� �л� ������ �迭�� ���� / ������ �����?


	/*
	int grade[10];
	for (int i = 0; i < 10; i++)
	{
		cout << i << "��° �л� ������ �Է��Ͻÿ� " << endl;
		cin >> grade[i];
	}

	int sum = 0;
	int average = 0;

	for (int i = 0; i < 10; i++)
	{
		sum += grade[i];
	}
	average = sum / 10;

	cout << endl;
	cout << "���� ������ : " << sum << endl;
	cout << "���� ����� : " << average << endl;
	*/
	////

	int arr2[3][3];

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			arr2[i][j] = i + j;
		}
	}

	cout << endl;


	for (int i = 0; i < 3; i++)
	{
		cout << i << "�� ��� ��� " << endl;
		for (int j = 0; j < 3; j++)
		{
			cout << i << "�� " << j << "�� : " << arr2[i][j] << "  ";
		}
		cout << endl;
	}

	random_device rd;
	mt19937 gen(rd());
	cout << endl;

	arr_gugudan();
	arr_sum();


	for (int i = 0; i < 5; i++)
	{
		cout << gen() << endl;
	}


	return 0;
}


/*
 4���� ����
 �迭�� Ȱ���ϱ�
  1. ��ǲ�� �޾� �Է¹��� ������ ������ ������� �迭�� ���� �� ���



  2. ���� ǥ���� ���� �հ� ���� ��, ��� ���� ���� ���϶�

   98 78 77 66 55
   84 ...
   82 ...
   86 ...         
   12 52 45 78 25

   ����
   ��� �� ��ǻ�� ���ھ߱�
    ��ǻ�ʹ� ������ ���� 3���� �̴´�
	����� ���ʴ�� 3���� �Է��Ѵ�
	�� 
	�������� 3out
	�����߻� ������ 1���� 10
	1~10�̿ܿ� �����Է½� ���Է¹޴´�

*/

void arr_gugudan()
{
	//1. ��ǲ�� �޾� �Է¹��� ������ ������ ������� �迭�� ���� �� ���

	int input;
	int gugudan[10];

	cout << "�������� ����� ���ڸ� �Է��Ͻÿ�" << endl;
	cin >> input;

	cout << input << "��" << endl;
	for (int i = 0; i < 9; i++)
	{
		gugudan[i] = (i + 1) * input;
		cout << input << " * " << i + 1 << " = " << gugudan[i] << endl;
	}
	cout << endl;
}

void arr_sum()
{
	//   2. ���� ǥ���� ���� �հ� ���� ��, ��� ���� ���� ���϶�
	srand(time(NULL));

	int arr[5][5];
	int input_dir;
	int input_num;
	int sum = 0;

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			arr[i][j] = rand() % 100 + 1;
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	while (true)
	{
		cout << "������ : 1, ������ : 2 / ���ϴ� ���� �Է��Ͻÿ�" << endl;
		cin >> input_dir;

		if (input_dir == 1 || input_dir == 2)
			break;
		else
			cout << "�ٽ� �Է��Ͻÿ�" << endl;
	}

	while (true)
	{
		cout << "1~5�� ���ϴ� ���̳� ���� �Է��Ͻÿ�" << endl;
		cin >> input_num;

		if (input_num == 1 || input_num == 2 || input_num == 3 || input_num == 4 || input_num == 5)
			break;
		else
			cout << "�ٽ� �Է��Ͻÿ�" << endl;
	}
	

	for (int i = 0; i < 5; i++)
	{
		if (input_dir == 1)
		{
			sum += arr[input_num - 1][i];
		}
		else if (input_dir == 2)
		{
			sum += arr[i][input_num - 1];
		}
	}

	cout << endl;
	cout << "���Ͻô� ���� " << sum << "�Դϴ�" << endl;
}
