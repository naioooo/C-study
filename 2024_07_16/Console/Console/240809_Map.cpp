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

//���Ŵ��� �����
// ���� ���� �̿��ؼ� ������
// ������ map�� ���� �̸��� ���� �����ͷ� �����ϰ�
// Ű���� ���� ���� ��ȯ�ϴ� �Լ��� ����
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
	armor.insert({"����", Armor("����", 100)});
	armor.insert({"�尩", Armor("�尩", 50)});
	armor.insert({"�Ź�", Armor("�Ź�", 210)});


	print_map(armor);

	SceneManager scenemanager;
	scenemanager.InsertScene( "�޴�", new Scene("�޴�"));

}