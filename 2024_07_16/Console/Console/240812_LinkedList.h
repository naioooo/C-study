#pragma once
#include <iostream>

using namespace std;

struct Node
{
	int value;
	Node* next;

	Node(int v) : value(v), next(nullptr) {}
};

class SLL
{
private:
	Node* head;

public:
	SLL();
	~SLL();

	void insert(int value);
	void remove(int value);
	void print();
};