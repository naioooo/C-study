#include <iostream>
#include <random>
#include <string>
#include <vector>

using namespace std;

/*
카드게임 만들기
♤♡♧◇

트럼프 카드는 52장

예를 들어서 만약 다음과 같은 카드가 나왔다면 (출력)
아래와 같이 보여지는 카드는 컴퓨터가 낸다고 가정함
♧7 ♤8 ♡9 

내가 뽑은 카드가 컴퓨터가 낸 카드의 범위안에 있다면 승리
동일하거면 베팅액만큼 소진
벗어나면 베팅액 * 2만큼 소진

조건) 한번 사용한 카드는 버려야한다
17판 돌리면 자동으로 끝나야함(카드를 모두 소진한다면) 
소지금 만원
최소베팅금액

한번 나온 카드는 다시 나오면 안된다
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

//♤♡♧◇
int main()
{
	srand(time(NULL));
	vector<Card> card;
	int money = 10000;

	//카드 생성
	for (int i = 0; i < 52; i++)
	{
		if (i < 13)
		{
			card.push_back(Card("♤", i + 1));
		}
		else if (i < 26)
		{
			card.push_back(Card("♡", i - 11));
		}
		else if (i < 39)
		{
			card.push_back(Card("♧", i - 24));
		}
		else if (i < 52)
		{
			card.push_back(Card("◇", i - 38));
		}
	}

	while (true)
	{
		// 카드 모두 소진시 종료
		if (card.empty())
		{
			cout << "카드를 모두 소진하였습니다" << endl;
			break;
		}
		// 돈 소진시 종료
		else if (money < MIN_BET)
		{
			cout << "돈을 모두 소진하였습니다" << endl;
			break;
		}

		// 카드 섞기
		card = shuffle(card);
		Result result = NONE;
		int input;

		Card com1_card = card[card.size() - 1];
		Card com2_card = card[card.size() - 2];
		Card player_card = card[card.size() - 3];

		card.pop_back();
		card.pop_back();
		card.pop_back();

		// 베팅 금액 입력
		while (true)
		{
			cout << "베팅할 금액을 입력하세요" << endl;
			cout << "최소 베팅 금액 : "<< MIN_BET << endl;
			cin >> input;

			if (input <= money && money - input >= 0 && input >= MIN_BET)
			{
				money -= input;
				break;
			}

			cout << "잘못입력하셨습니다" << endl;
		}

		cout << endl;
		cout << "현재 금액 : " << money << endl;
		cout << "당신이 베팅한 금액 : " << input << endl;
		cout << "당신이 뽑은카드 "  << player_card.Glyph << " , " << player_card.number << endl;
		cout << "컴퓨터가 뽑은카드 1 : "  << com1_card.Glyph << " , " << com1_card.number << endl;
		cout << "컴퓨터가 뽑은카드 2 : "  << com2_card.Glyph << " , " << com2_card.number << endl;
		cout << endl;

		// 컴퓨터의 카드중에 더 큰 수를 정하고 대결 결과 리턴
		if (com1_card.number < com2_card.number)
		{
			result = Result_Check(com1_card, com2_card, player_card);
		}
		else
		{
			result = Result_Check(com2_card, com1_card, player_card);
		}

		//결과에 따른 베팅 정산
		if (result == WIN)
		{
			cout << " 당신이 승리하였습니다" << endl;
			money += input * 3;
			cout << "얻은 금액 : " << input * 3 << endl;
			cout << "현재 금액 : " << money << endl;
		}
		else if (result == DRAW)
		{
			cout << " 비겼습니다" << endl;
			money += input ;
			cout << "얻은 금액 : " << input << endl;
			cout << "현재 금액 : " << money << endl;
		}
		if (result == LOSE)
		{
			cout << " 당신이 패배하였습니다" << endl;
			money -= input * 3;
			cout << "빼앗긴 금액 : " << -(input * 3) << endl;
			cout << "현재 금액 : " << money << endl;
		}

		cout << " 남은 카드 수 : " << card.size() << endl;
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