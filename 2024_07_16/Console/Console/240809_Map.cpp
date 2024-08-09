#include <iostream>
#include <vector>
#include <list>
#include <map>

using namespace std;

class Armor
{
private:
	string name;
	int def;

public:
	Armor() : name(""), def(0) {}
	Armor(const string& n, const int d) : name(n), def(d) {}

	string GetName()
	{
		return name;
	}

};

class Scene
{
private:
	string desc;

public:
	Scene(): desc(""){}
	Scene(const string& s): desc(s){}

	string GetDesc() const
	{
		return desc;
	}

};

//씬매니저 만들기
// 씬을 맵을 이용해서 만들어보자
// 씬들을 map에 씬의 이름과 씬의 포인터로 저장하고
// 키값에 따라 씬을 전환하는 함수를 구현
// 


class SceneManager
{
private:
	map<string, Scene*> scenemap;
	Scene* CurrentScene;
	string currentname;

public:
	void SetCurScene(Scene* scene);
	void ChangeScene();
	void InsertScene(string str, Scene* scene);
	void ShowCurScene();


};

void print_map(map<string, Armor> m)
{
	for (auto& n : m)
	{
		cout << n.first << ",  " << n.second.GetName() << endl;
	}

	cout << endl;
}

int main()
{
	map<string, Armor> armor;
	armor.insert({"방패", Armor("방패", 100)});
	armor.insert({"장갑", Armor("장갑", 50)});
	armor.insert({"신발", Armor("신발", 210)});


	print_map(armor);

	SceneManager scenemanager;
	scenemanager.InsertScene( "메뉴", new Scene("메뉴"));

}