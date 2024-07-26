#include <iostream>
#include <random>
#include <time.h>
#include <windows.h>

using namespace std;

enum DIR
{
	LEFT = 1,
	RIGHT,
	UP,
	DOWN
};

struct Point
{
	int x;
	int y;

	Point()
	{

	}
	Point(int _x, int _y)
	{
		x = _x;
		y = _y;
	}
};

/*

����

1. �������
 5*5 �Ƕ���
���� 3�� �ϼ��ϸ� ����
���� ��ȣ �Է½� ���ڷ� �ٲ�� �������
��ɳ��� ��������

2. �����̵� �������
 4*4 �����̵� ����
 ��������? 
 
*/

vector<vector<int>> shuffle(vector<vector<int>> bingo);
void print_bingo(vector<vector<int>> bingo);
vector<vector<int>> make_bingo();
int input_bingo();
vector<vector<int>> process_bingo(vector<vector<int>> bingo, int input);
int check_bingo(vector<vector<int>> bingo);

void bingo();


vector<vector<int>> make_puzzle();
vector<vector<int>> process_puzzle(vector<vector<int>> puzzle, int input, Point p);
vector<vector<int>> swap_puzzle(vector<vector<int>> puzzle, Point a, Point b);
int input_puzzle(Point p);
Point find_pivot(vector<vector<int>> puzzle);
void slide_puzzle();


int main()
{
	srand(time(NULL));

	//bingo();
	slide_puzzle();
}



void bingo()
{
	vector<vector<int>> P1_bingo = make_bingo();
	vector<vector<int>> P2_bingo = make_bingo();
	
	int P1_bingo_cnt = 0;
	int P2_bingo_cnt = 0;
	
	while (true)
	{
		cout << " �÷��̾� 1 ������ " << endl;
		print_bingo(P1_bingo); 
		cout << " �÷��̾� 2 ������ " << endl;
		print_bingo(P2_bingo);

		P1_bingo_cnt = check_bingo(P1_bingo);
		P2_bingo_cnt = check_bingo(P2_bingo);

		cout << " �÷��̾� 1 �� ���� ���� " << P1_bingo_cnt << "�Դϴ�" << endl;;
		cout << " �÷��̾� 2 �� ���� ���� " << P2_bingo_cnt << "�Դϴ�" << endl;;

		if (P1_bingo_cnt >= 3 && P2_bingo_cnt >= 3)
		{
			cout << " �����ϴ� " << endl;
			break;
		}
		else if (P1_bingo_cnt >= 3)
		{
			cout << " �÷��̾� 1�� �¸��߽��ϴ� " << endl;
			break;
		}
		else if (P2_bingo_cnt >= 3)
		{
			cout << " �÷��̾� 2�� �¸��߽��ϴ� " << endl;
			break;
		}

		cout << "�÷��̾� 1��";
		int P1_input = input_bingo();
		cout << "�÷��̾� 2��";
		int P2_input = input_bingo();

		P1_bingo = process_bingo(P1_bingo, P1_input);
		P2_bingo = process_bingo(P2_bingo, P2_input);

		system("cls");
	}

	cout << "���� ���� ���� " << endl;
}

vector<vector<int>> shuffle(vector<vector<int>> bingo)
{
	for (int i = 0; i < 1000; i++)
	{
		int y1 = rand() % (bingo.size());
		int x1 = rand() % (bingo[y1].size());

		int y2 = rand() % (bingo.size());
		int x2 = rand() % (bingo[y2].size());

		int tmp = bingo[y1][x1];
		bingo[y1][x1] = bingo[y2][x2];
		bingo[y2][x2] = tmp;
	}

	return bingo;
}

void print_bingo(vector<vector<int>> bingo)
{
	for (int i = 0; i < bingo.size(); i++)
	{
		for (int j = 0; j < bingo[i].size(); j++)
		{
			if (bingo[i][j] == 0)
				cout << " @ ";
			else if (bingo[i][j] < 10)
				cout << bingo[i][j] << "  ";
			else
				cout << bingo[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}

vector<vector<int>> make_bingo()
{
	vector<vector<int>> bingo;

	bingo.resize(5);

	for (int i = 0; i < 5; i++)
	{
		bingo[i].resize(5);
		for (int j = 0; j < 5; j++)
		{
			bingo[i][j] = (j + 1) + (5 * i);
		}
	}

	bingo = shuffle(bingo);

	return bingo;
}

int input_bingo()
{
	int input = 0;

	while (true)
	{
		cout << " �������� �Է��� ���� �Է��Ͻÿ� " << endl;
		cin >> input;

		if (input > 0 && input <= 25)
		{
			break;
		}

		cout << "�߸� �Է��ϼ̽��ϴ� " << endl;
	}

	return input;
}

vector<vector<int>> process_bingo(vector<vector<int>> bingo, int input)
{
	bingo[(input - 1) / 5][(input - 1) % 5] = 0;
	return bingo;
}

int check_bingo(vector<vector<int>> bingo)
{
	int cnt_bingo = 0;
	bool check = false;

	//���� üũ
	for (int i = 0; i < 5; i++)
	{
		int j = 0;
		for (; j < 5; j++)
		{
			if (bingo[i][j] > 0)
				break;
		}
		if (j == 5)
			cnt_bingo++;
	}

	//���� üũ
	for (int i = 0; i < 5; i++)
	{
		int j = 0;
		for (; j < 5; j++)
		{
			if (bingo[j][i] > 0)
				break;
		}
		if (j == 5)
			cnt_bingo++;
	}

	//�밢�� üũ
	check = false;
	for (int i = 0, j = 0; i < 5; i++, j++)
	{
		if (bingo[i][j] > 0)
		{
			check = true;
			break;
		}
	}
	if (!check)
		cnt_bingo++;
	check = false;
	for (int i = 0, j = 4; i < 5; i++, j--)
	{
		if (bingo[i][j] > 0)
		{
			check = true;
			break;
		}
	}
	if (!check)
		cnt_bingo++;

	return cnt_bingo;
}

void slide_puzzle()
{
	vector<vector<int>> puzzle = make_puzzle();
	
	Point p = find_pivot(puzzle);

	while (true)
	{
		int input = 0;

		cout << endl;
		cout << " ������ " << endl;
		print_bingo(puzzle);

		input = input_puzzle(p);

		puzzle = process_puzzle(puzzle, input, p);
		p = find_pivot(puzzle);
		cout << " ======================================== " << endl;
	}
}

vector<vector<int>> make_puzzle()
{
	vector<vector<int>> puzzle;

	puzzle.resize(4);

	for (int i = 0; i < 4; i++)
	{
		puzzle[i].resize(4);
		for (int j = 0; j < 4; j++)
		{
			puzzle[i][j] = j + (4 * i);
		}
	}

	puzzle = shuffle(puzzle);

	return puzzle;
}

vector<vector<int>> process_puzzle(vector<vector<int>> puzzle, int input, Point p)
{
	DIR dir = DIR(input);
	Point p2;

	switch (dir)
	{
	case LEFT:
		p2 = Point(p.x - 1, p.y);
		puzzle = swap_puzzle(puzzle, p, p2);
		break;
	case RIGHT:
		p2 = Point(p.x + 1, p.y);
		puzzle = swap_puzzle(puzzle, p, p2);
		break;
	case UP:
		p2 = Point(p.x, p.y - 1);
		puzzle = swap_puzzle(puzzle, p, p2);
		break;
	case DOWN:
		p2 = Point(p.x, p.y + 1);
		puzzle = swap_puzzle(puzzle, p, p2);
		break;
	}

	return puzzle;
}

vector<vector<int>> swap_puzzle(vector<vector<int>> puzzle, Point a, Point b)
{
	int tmp = puzzle[a.y][a.x];
	puzzle[a.y][a.x] = puzzle[b.y][b.x];
	puzzle[b.y][b.x] = tmp;

	return puzzle;
}

int input_puzzle(Point p)
{
	int input = 0;

	while (true)
	{
		cout << " ������ ��ġ�� ���ÿ� " << endl;
		cout << " LEFT : 1 RIGHT : 2 UP : 3 DOWN :4 " << endl;
		cin >> input;


		if (input > 0 && input <= 4)
		{
			DIR dir = DIR(input);
			
			if (dir == LEFT &&  p.x > 0)
			{
				break;
			}
			else if (dir == RIGHT && p.x < 3)
			{
				break;
			}
			else if (dir == UP && p.y > 0)
			{
				break;
			}
			else if (dir == DOWN && p.y < 3)
			{
				break;
			}
		}

		cout << "�߸� �Է��ϼ̽��ϴ� " << endl;
	}

	return input;
}

Point find_pivot(vector<vector<int>> puzzle)
{
	Point p;
	bool check = false;
	// ����� ã��
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (puzzle[i][j] == 0)
			{
				p.y = i;
				p.x = j;
				check = true;
				break;
			}
		}
		if (check)
			break;
	}
	return p;
}
