#include <iostream>
#include <time.h>
#include <vector>
#include <algorithm>

using namespace std;

/*
����3. ���� ���� ���

- 1 ~ 5������ ���� ����
- 6 ~ 19������ ���� ����
- 23 ~ 189������ ���� ���� -> ����� �ɶ� �ּ� �ִ밪 ���
*/

int main()
{
	while (true)
	{

		srand((unsigned)time(NULL));

		int randA = rand() % 5 + 1;
		cout << "1 ���� 5������ ���� �� : " << randA << endl;

		int randB = rand() % 14 + 6;
		cout << "6 ���� 19������ ���� �� : " << randB << endl;

		vector<int> rand_num;
		for (int i = 0; i < 3; i++)
		{
			rand_num.push_back(rand() % 167 + 23);
		}

		sort(rand_num.begin(), rand_num.end());

		cout << "23 ~ 189������ ������" << endl;
		cout << "�ּڰ� : " << rand_num[0] << endl;
		cout << "�ִ� : " << rand_num[2] << endl;
		cout << "�߰��� : " << rand_num[1] << endl;

		char c;

		cout << endl;
		cout << "=======================" << endl;
		cout << "�ٸ� ���� ���� �ʹٸ� r�� �����ּ���" << endl;
		cin >> c;

		cout << endl;
		if (c != 'r')
			break;
	}
	return 0;
}
