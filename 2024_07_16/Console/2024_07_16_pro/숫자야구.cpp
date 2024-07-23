#include <iostream>
#include <time.h>
#include <random>
#include <vector>
#include <algorithm>



using namespace std;

/*
����
   ��� �� ��ǻ�� ���ھ߱�
	��ǻ�ʹ� ������ ���� 3���� �̴´�
	����� ���ʴ�� 3���� �Է��Ѵ�
	��
	�������� 3out
	�����߻� ������ 1���� 10
	1~10�̿ܿ� �����Է½� ���Է¹޴´�

*/

void number_baseball();
bool check_full_arr(int arr[3]);
bool check_duplicate(int arr[3], int input);

int main()
{
	//number_baseball();

	return 0;
}

void number_baseball()
{
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<> dist(1, 10);

	int out_count = 0;

	while (true)
	{
		// �ƿ� ī��Ʈ üũ
		if (out_count == 3)
		{
			cout << "3�ƿ� ���� ������ �����մϴ� " << endl;
		    break;
		}

		// ��ǻ���� �ߺ����� ���� ����
		int com_arr[3] = {};
		int cnt = 0;

		while(true)
		{
			if (check_full_arr(com_arr))
				break;

			int tmp = dist(gen);
			if (!check_duplicate(com_arr, tmp))
			{
				com_arr[cnt++] = tmp;
			}
		}
		

		cout << "=========================================================== " << endl;
		cout << "��ǻ�Ͱ� ���� �� " << endl;
		
		for (int i = 0; i < 3; i++)
	    {
	    	cout << com_arr[i] << " ";
	    }
	    cout << endl;
	    
		// �÷��̾��� �� �Է� �� �˻�
	    while (true)
	    {
			int player_arr[3] = {};
	    	cnt = 0;

	    	//�÷��̾� �����Է�
	    	while (true)
	     	{
		        if (check_full_arr(player_arr))
		        	break;
	   	        
		        int input;
	   	        
		        cout << "���� �÷��̾ ���� �� " << endl;
	   	        
		        for (int i = 0; i < 3; i++)
		        {
		        	if (player_arr[i] == 0)
		        		break;
	   	        
		        	cout << player_arr[i] << " ";
		        }
	   	        
		        cout << endl;
		        cout << "1 ���� 10���� ���ڸ� �Է��Ͻÿ� " << endl;
		        cin >> input;
	   	        
		        if (input < 1 || input > 10 || check_duplicate(player_arr, input))
		        {
		        	cout << endl;
		        	cout << "�߸� �Է��ϼ̽��ϴ� " << endl;
		        }
		        else
		        {
		        	player_arr[cnt++] = input;
		        }

		        cout << endl;
		    }	

	    	cout << endl;
	    	cout << "���� �÷��̾ ���� �� " << endl;
	    	for (int i = 0; i < 3; i++)
	    	{
	    		cout << player_arr[i] << " ";
	    	}
	    	cout << endl;

			/*
	    	cout << "��ǻ�Ͱ� ���� �� " << endl;
	    	for (int i = 0; i < 3; i++)
	    	{
	    		cout << com_arr[i] << " ";
	    	}
	    	cout << endl;
			*/
	    
			// ��Ʈ����ũ, �� ���
	    	int strike = 0;
	    	int ball = 0;	    

	    	for (int i = 0; i < 3; i++)
	    	{
	    		if (player_arr[i] == com_arr[i])
	    		{
	    			strike++;
	    		}
	    		else
	    		{
	    			for (int j = 0; j < 3; j++)
	    			{
	    				if (player_arr[i] == com_arr[j])
	    				{
	    					ball++;
	    				}
	    			}
	    		}
	    	}
	    
	    	cout << "��Ʈ����ũ : " << strike << " �� : " << ball << "�� �Դϴ�" << endl;
	    
			// 3��Ʈ����ũ�� Ż��
			if (strike == 3)
			{
				// �ƿ� ������ �ƿ�ī��Ʈ ����
				out_count++;
				cout << "�ƿ� ����! ���� �ƿ�ī��Ʈ : " << out_count << endl;
				cout << endl;
				break;
			}
		}
	}
}

bool check_full_arr(int arr[3])
{
	for (int i = 0; i < 3; ++i) {
		if (arr[i] == 0)
			return false;
	}

	return true;
}

bool check_duplicate(int arr[3], int input)
{
	for (int i = 0; i < 3; ++i) {
		if (arr[i] == input)
			return true;
	}

	return false;
}

