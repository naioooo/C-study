#include "240812_LinkedList.h"

#pragma region MyRegion

#pragma endregion

int main()
{
	SLL* sll = new SLL();

	sll->insert(10);
	sll->insert(20);
	sll->insert(30);
	sll->remove(20);
	sll->print();
}

SLL::SLL() : head(nullptr)
{
}

SLL::~SLL()
{
	while (head != nullptr)
	{
		Node* temp = head;
		head = head->next;
		delete temp;
	}
}

void SLL::insert(int value)
{
	Node* newNode = new Node(value);

	if (head == nullptr)
	{
		head = newNode;
	}
	else
	{
		Node* temp = head;

		while (temp->next != nullptr)
		{
			temp = temp->next;
		}

		temp->next = newNode;
	}
}

void SLL::remove(int value)
{
	Node* cur = head;
	Node* prev = nullptr;

	while (cur != nullptr)
	{
		if (cur->value == value)
		{
			if (prev != nullptr)
			{
				prev->next = cur->next;
			}
			else
			{
				head = cur->next;
			}

			delete cur;
			return;
		}

		prev = cur;
		cur = cur->next;
	}
}

void SLL::print()
{
	Node* temp = head;

	cout << "=====================" << endl;
	while (temp != nullptr)
	{
		cout << temp->value << " ";
		temp = temp->next;
	}

	cout << endl;
}
