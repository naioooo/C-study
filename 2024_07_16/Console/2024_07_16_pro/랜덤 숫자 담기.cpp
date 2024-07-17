#include <iostream>
#include <time.h>
#include <vector>
#include <algorithm>

using namespace std;

/*
과제3. 랜덤 숫자 담기

- 1 ~ 5까지의 랜덤 숫자
- 6 ~ 19까지의 랜덤 숫자
- 23 ~ 189까지의 랜덤 숫자 -> 출력이 될때 최소 최대값 명시
*/

int main()
{
	while (true)
	{

		srand((unsigned)time(NULL));

		int randA = rand() % 5 + 1;
		cout << "1 에서 5까지의 랜덤 값 : " << randA << endl;

		int randB = rand() % 14 + 6;
		cout << "6 에서 19까지의 랜덤 값 : " << randB << endl;

		vector<int> rand_num;
		for (int i = 0; i < 3; i++)
		{
			rand_num.push_back(rand() % 167 + 23);
		}

		sort(rand_num.begin(), rand_num.end());

		cout << "23 ~ 189까지의 랜덤값" << endl;
		cout << "최솟값 : " << rand_num[0] << endl;
		cout << "최댓값 : " << rand_num[2] << endl;
		cout << "중간값 : " << rand_num[1] << endl;

		char c;

		cout << endl;
		cout << "=======================" << endl;
		cout << "다른 값을 보고 싶다면 r을 눌러주세요" << endl;
		cin >> c;

		cout << endl;
		if (c != 'r')
			break;
	}
	return 0;
}
