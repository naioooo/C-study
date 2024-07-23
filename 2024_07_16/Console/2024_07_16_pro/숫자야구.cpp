#include <iostream>
#include <time.h>
#include <random>
#include <vector>
#include <algorithm>



using namespace std;

/*
과제
   사람 대 컴퓨터 숫자야구
	컴퓨터는 임의의 숫자 3개를 뽑는다
	사람은 차례대로 3개를 입력한다
	비교
	종료조건 3out
	난수발생 범위는 1에서 10
	1~10이외에 숫자입력시 재입력받는다

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
		// 아웃 카운트 체크
		if (out_count == 3)
		{
			cout << "3아웃 성공 게임을 종료합니다 " << endl;
		    break;
		}

		// 컴퓨터의 중복없는 난수 생성
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
		cout << "컴퓨터가 가진 수 " << endl;
		
		for (int i = 0; i < 3; i++)
	    {
	    	cout << com_arr[i] << " ";
	    }
	    cout << endl;
	    
		// 플레이어의 수 입력 후 검사
	    while (true)
	    {
			int player_arr[3] = {};
	    	cnt = 0;

	    	//플레이어 숫자입력
	    	while (true)
	     	{
		        if (check_full_arr(player_arr))
		        	break;
	   	        
		        int input;
	   	        
		        cout << "현재 플레이어가 가진 수 " << endl;
	   	        
		        for (int i = 0; i < 3; i++)
		        {
		        	if (player_arr[i] == 0)
		        		break;
	   	        
		        	cout << player_arr[i] << " ";
		        }
	   	        
		        cout << endl;
		        cout << "1 부터 10까지 숫자를 입력하시오 " << endl;
		        cin >> input;
	   	        
		        if (input < 1 || input > 10 || check_duplicate(player_arr, input))
		        {
		        	cout << endl;
		        	cout << "잘못 입력하셨습니다 " << endl;
		        }
		        else
		        {
		        	player_arr[cnt++] = input;
		        }

		        cout << endl;
		    }	

	    	cout << endl;
	    	cout << "현재 플레이어가 가진 수 " << endl;
	    	for (int i = 0; i < 3; i++)
	    	{
	    		cout << player_arr[i] << " ";
	    	}
	    	cout << endl;

			/*
	    	cout << "컴퓨터가 가진 수 " << endl;
	    	for (int i = 0; i < 3; i++)
	    	{
	    		cout << com_arr[i] << " ";
	    	}
	    	cout << endl;
			*/
	    
			// 스트라이크, 볼 계산
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
	    
	    	cout << "스트라이크 : " << strike << " 볼 : " << ball << "개 입니다" << endl;
	    
			// 3스트라이크시 탈출
			if (strike == 3)
			{
				// 아웃 성공시 아웃카운트 증가
				out_count++;
				cout << "아웃 성공! 현재 아웃카운트 : " << out_count << endl;
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

