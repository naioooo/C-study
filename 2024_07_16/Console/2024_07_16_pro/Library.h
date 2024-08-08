#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <time.h>
#include <windows.h>

using namespace std;

#define MAX_PLAYER 4

enum State
{
	NONE,
	ATTACK,
	SKILL,
	PROTECT
};

enum CLASS
{
	WARRIOR = 1,
	MAGE,
	ARCHER,
	THIEF
};


