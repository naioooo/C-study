#include "Scene.h"

Scene::Scene()
{
}

bool Scene::Getcheckover()
{
	return checkover;
}

bool Scene::Getgameready()
{
	return gameready;
}

void Scene::Setcheckover(bool c)
{
	checkover = c;
}

void Scene::Setgameready(bool g)
{
	gameready = g;
}

