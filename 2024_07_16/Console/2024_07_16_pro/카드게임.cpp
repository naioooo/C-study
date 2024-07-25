#include <iostream>
#include <random>
#include <string>
#include <vector>

using namespace std;

/*
ī����� �����
��������

Ʈ���� ī��� 52��

���� �� ���� ������ ���� ī�尡 ���Դٸ� (���)
�Ʒ��� ���� �������� ī��� ��ǻ�Ͱ� ���ٰ� ������
��7 ��8 ��9 

���� ���� ī�尡 ��ǻ�Ͱ� �� ī���� �����ȿ� �ִٸ� �¸�
�����ϰŸ� ���þ׸�ŭ ����
����� ���þ� * 2��ŭ ����

����) �ѹ� ����� ī��� �������Ѵ�
17�� ������ �ڵ����� ��������(ī�带 ��� �����Ѵٸ�) 
������ ����
�ּҺ��ñݾ�

�ѹ� ���� ī��� �ٽ� ������ �ȵȴ�
*/

#define MIN_BET 1000

enum Result
{
	NONE,
	WIN,
	LOSE,
	DRAW
};

struct Card
{
	string Glyph;
	int number;

	Card() {};
	Card(string _Glyph, int _number)
	{
		Glyph = _Glyph;
		number = _number;
	}
	~Card() {};
};

vector<Card> shuffle(vector<Card> card);

Result Result_Check(Card com1, Card com2, Card player);

//��������
int main()
{
	srand(time(NULL));
	vector<Card> card;
	int money = 10000;

	//ī�� ����
	for (int i = 0; i < 52; i++)
	{
		if (i < 13)
		{
			card.push_back(Card("��", i + 1));
		}
		else if (i < 26)
		{
			card.push_back(Card("��", i - 11));
		}
		else if (i < 39)
		{
			card.push_back(Card("��", i - 24));
		}
		else if (i < 52)
		{
			card.push_back(Card("��", i - 38));
		}
	}

	while (true)
	{
		// ī�� ��� ������ ����
		if (card.empty())
		{
			cout << "ī�带 ��� �����Ͽ����ϴ�" << endl;
			break;
		}
		// �� ������ ����
		else if (money < MIN_BET)
		{
			cout << "���� ��� �����Ͽ����ϴ�" << endl;
			break;
		}

		// ī�� ����
		card = shuffle(card);
		Result result = NONE;
		int input;

		Card com1_card = card[card.size() - 1];
		Card com2_card = card[card.size() - 2];
		Card player_card = card[card.size() - 3];

		card.pop_back();
		card.pop_back();
		card.pop_back();

		// ���� �ݾ� �Է�
		while (true)
		{
			cout << "������ �ݾ��� �Է��ϼ���" << endl;
			cout << "�ּ� ���� �ݾ� : "<< MIN_BET << endl;
			cin >> input;

			if (input <= money && money - input >= 0 && input >= MIN_BET)
			{
				money -= input;
				break;
			}

			cout << "�߸��Է��ϼ̽��ϴ�" << endl;
		}

		cout << endl;
		cout << "���� �ݾ� : " << money << endl;
		cout << "����� ������ �ݾ� : " << input << endl;
		cout << "����� ����ī�� "  << player_card.Glyph << " , " << player_card.number << endl;
		cout << "��ǻ�Ͱ� ����ī�� 1 : "  << com1_card.Glyph << " , " << com1_card.number << endl;
		cout << "��ǻ�Ͱ� ����ī�� 2 : "  << com2_card.Glyph << " , " << com2_card.number << endl;
		cout << endl;

		// ��ǻ���� ī���߿� �� ū ���� ���ϰ� ��� ��� ����
		if (com1_card.number < com2_card.number)
		{
			result = Result_Check(com1_card, com2_card, player_card);
		}
		else
		{
			result = Result_Check(com2_card, com1_card, player_card);
		}

		//����� ���� ���� ����
		if (result == WIN)
		{
			cout << " ����� �¸��Ͽ����ϴ�" << endl;
			money += input * 3;
			cout << "���� �ݾ� : " << input * 3 << endl;
			cout << "���� �ݾ� : " << money << endl;
		}
		else if (result == DRAW)
		{
			cout << " �����ϴ�" << endl;
			money += input ;
			cout << "���� �ݾ� : " << input << endl;
			cout << "���� �ݾ� : " << money << endl;
		}
		if (result == LOSE)
		{
			cout << " ����� �й��Ͽ����ϴ�" << endl;
			money -= input * 3;
			cout << "���ѱ� �ݾ� : " << -(input * 3) << endl;
			cout << "���� �ݾ� : " << money << endl;
		}

		cout << " ���� ī�� �� : " << card.size() << endl;
		cout << endl;
		cout << "=================================================" << endl;
	}

	return 0;
}

vector<Card> shuffle(vector<Card> card)
{
	for (int i = 0; i < 1000; i++)
	{
		int r1 = rand() % (card.size() - 1);
		int r2 = rand() % (card.size() - 1);

		string c_tmp = card[r1].Glyph;
		int i_tmp = card[r1].number;
		card[r1].Glyph = card[r2].Glyph;
		card[r1].number = card[r2].number;
		card[r2].Glyph = c_tmp;
		card[r2].number = i_tmp;
	}

	return card;
}

Result Result_Check(Card com1, Card com2, Card player)
{
	Result result = NONE;

	if (player.number > com1.number && player.number < com2.number)
	{
		result = WIN;
	}
	else if (player.number == com1.number || player.number == com2.number)
	{
		result = DRAW;
	}
	else
	{
		result = LOSE;
	}

	return result;
}