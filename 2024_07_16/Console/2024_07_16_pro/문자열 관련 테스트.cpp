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

// �ۼ��� ������ �ð����⵵�� ����ϴ� ���� ������ �Լ��� ���� �ֱ׷��� �ߴ��� �ۼ�
/*

������ ã������ ���ڿ��� �ѹ� ��ȸ O(n)
�׾ȿ��� �߶� ���ڿ��� Output�� ���ϱ� ���� ���ڿ� �ѹ� ��ȸ O(n)
���ڿ��� ��ȸ�ϰ� �׾ȿ��� ABYSS PEARL�� ã������ �׾ȿ��� �ѹ� �� ��ȸ ���ڿ� �ѹ� ��ȸ O(n^2)
�ٲ� ���ڿ��� ã�Ҵٸ� �� ���ڿ��� �ٲٱ� ���� O(n);

�� 3O(n) +  O(n^2)�Դϴ�

�ܾ �������� �ݴ�� ǥ���ϱ����� �ڿ��� ���� ������ ã�Ҵ�
������ ã�� ã�� ���� ���������� ��� �ܾ ����� Output�� ���� �־���
ABYSS PEARL �̶� �ܾ ã�� �� �ܾ��� ������ ��������

*/