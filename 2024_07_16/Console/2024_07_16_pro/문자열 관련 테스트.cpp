#include <iostream>

using namespace std;
#define _CRT_SECURE_NO_WARNINGS

void ReverseWords(char* output, int outputArraySize, const char* input);

int main()
{
	const char* input = "HELLO WOLRD THIS IS PEARL ABYSS";
	int outputArraySize = strlen(input+ 10);
	char* output = new char[outputArraySize];

	ReverseWords(output, outputArraySize, input);

	return 0;
}

/*

이번주 까지
도전 과제 - 문자열 관련 테스트
 펄어비스

 <주의 사항>
 c++언어로 풀기 빈칸을 알맞게 채워라
 C 런타임 라이브러리 / STL라이브러리 함수 사용 금지
 STL string 사용금지
 해당 방법에 대해 왜 그렇게 작성했는지 주석 작성

 문제 주어진 문자열을 단어 단위로 순서를 뒤집어 출력하시오
  입력값 : HELLO WOLRD THIS IS PEARL ABYSS
  반환값 : PEARL ABYSS IS THIS WOLRD HELLO

  입력 문자열은 공백이 없고
  공백이 한칸으로 구분된다고 가정
*/

void ReverseWords(char* output, int outputArraySize, const char* input)
{
	int input_length = strlen(input);
	int check_point = input_length;
	int cnt = 0;

	for (int i = input_length - 1; i >= -1; i--)
	{
		if (input[i] == ' ' || i == -1)
		{
			for (int j = i + 1; j < check_point; j++)
			{
				output[cnt++] = input[j];
			}

			check_point = i;
			output[cnt++] = ' ';
		}
	}

	const char* ABYSS_PEARL = "ABYSS PEARL";
	const char* PEARL_ABYSS = "PEARL ABYSS";
	int ABYSS_PEARL_length = strlen(ABYSS_PEARL);
	int PEARL_ABYSS_length = strlen(PEARL_ABYSS);

	cnt = 0;

	while (true)
	{
		if (cnt >= input_length)
			break;

		int tmp = cnt;
		int check;

		for (check = 0; check < ABYSS_PEARL_length; check++)
		{
			if (output[tmp++] != ABYSS_PEARL[check])
				break;
		}

		if (check == PEARL_ABYSS_length)
		{
			for (int i = 0; i < PEARL_ABYSS_length; i++)
			{
				output[cnt++] = PEARL_ABYSS[i];
			}

		}

		cnt++;
	}

	printf("%s", output);
}

// 작성이 끝나면 시간복잡도를 계산하는 수식 별도로 함수로 구현 왜그렇게 했는지 작성
/*

공백을 찾기위해 문자열을 한번 순회 O(n)
그안에서 잘라낸 문자열을 Output에 더하기 위해 문자열 한번 순회 O(n)
문자열을 순회하고 그안에서 ABYSS PEARL을 찾기위해 그안에서 한번 더 순회 문자열 한번 순회 O(n^2)
바꿀 문자열을 찾았다면 그 문자열을 바꾸기 위해 O(n);

총 3O(n) +  O(n^2)입니다

단어를 기준으로 반대로 표기하기위해 뒤에서 부터 공백을 찾았다
공백을 찾고 찾은 점은 기준점으로 삼아 단어를 만들어 Output에 집어 넣었다
ABYSS PEARL 이란 단어를 찾고 그 단어의 순서를 뒤집었다

*/