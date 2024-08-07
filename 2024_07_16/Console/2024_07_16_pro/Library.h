#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <time.h>

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
