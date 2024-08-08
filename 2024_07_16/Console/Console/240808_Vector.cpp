
#include <iostream>
#include <vector>

using namespace std;

class Weapon
{
private:
	string name;
	int damage;

public:
	Weapon() {};
	Weapon(const string& n, const int d) : name(n), damage(d) {};
	~Weapon() {
	}

	void Print()const
	{
		cout << "이름 : " << name << " 공격력 : " << damage << endl;
	}

};


void print_vec(vector<int> vec)
{
	for (const auto& v : vec)
	{
		cout << v << " ";
	}
	cout << endl;
}

int main()
{
	vector<int> vec;
	vec.push_back(1);
	vec.push_back(1);
	vec.push_back(1);
	vec.push_back(1);
	vec.push_back(1);
	vec.push_back(1);
	vec.push_back(1);

	print_vec(vec);
	cout << "vector의 capacity: " << vec.capacity() << endl;
	vec.clear();
	print_vec(vec);
	cout << "vector의 capacity: " << vec.capacity() << endl;
	vec.shrink_to_fit();
	print_vec(vec);
	cout << "vector의 capacity: " << vec.capacity() << endl;


	vector<Weapon> weapon;

	weapon.push_back(Weapon("도끼", 5));
	weapon.push_back(Weapon("활", 3));
	weapon.push_back(Weapon("장검", 4));
	weapon.push_back(Weapon("단검", 1));

	for (const auto& w : weapon)
	{
		w.Print();
	}

	vector<shared_ptr<Weapon>> weapon_ptr;


	weapon_ptr.push_back(make_shared<Weapon>("도끼", 5));
	weapon_ptr.push_back(make_shared<Weapon>("활", 3));
	weapon_ptr.push_back(make_shared<Weapon>("장검", 4));
	weapon_ptr.push_back(make_shared<Weapon>("단검", 1));

	for (const auto& w : weapon_ptr)
	{
		w->Print();
	}
}

/*

1. 아무거나 클래스 만들어서 벡터에 저장후 출력
2. 상점시스템
 shop 클래스 item 클래스 
 캐릭터 클래스 -> 인벤토리 클래스
 아이템구매 -> 돈을 통해 -> 아이템 인벤토리로 이동
 인벤토리 -> 되팔기 -> 돈을 얻는다
 인벤토리에서는 장착 및 탈착이 가능해야한다
 수량제한
 아이템을 통한 캐릭터의 스탯창 



*/