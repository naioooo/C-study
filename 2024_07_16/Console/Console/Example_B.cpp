#include <iostream>
#include <time.h>
#include <windows.h>

using namespace std;


/*
���𰡸� ������ ���� 

1. �ʿ��� ����� �̸� ����� �� �ְ� ���縦 �صд�
    ���α׷��Ӵ� ����� ������ �ǰ� ����� ��ǻ�Ͱ� ����
2. ������ �����ؾ��Ѵ�
3. ���� ������� �ϴ� ��ɿ� ���� �������� ������ ���´�
4. �ʿ��� ���� ����
5. ������ ���� �ʱ�ȭ
6. ����� ������ ���� �ݺ��� ������
7. �ݺ��� ���ư��� �������� ���α׷� ���� �ϴ� �� ����
*/

int main()
{
	srand(time(NULL));


	int number = 50;
	int mynumber = 0;

	while (true)
	{
		cout << "���ٿ� ����  ���ڸ� �Է��Ͻÿ�" << endl;

		cin >> mynumber;

		Sleep(41);

		if (mynumber == number)
		{
			cout << "�����" << endl;
			Sleep(41);
			system("cls");
		}
		else if (mynumber > number)
		{
			cout << " �� ũ��" << endl;
		}
		else
		{
			cout << " �� �۴�" << endl;
		}

	}

	return 0;
}