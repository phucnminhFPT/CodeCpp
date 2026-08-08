#include <iostream>
#include <vector>

using namespace std;

class Node
{
public:
	int data;
	Node *next;

	// Constructor Node
	Node(int v)
	{
		data = v;
		next = nullptr;
	}

	Node(int v, Node *newNode)
	{
		data = v;
		next = newNode;
	}
};

class Linked
{
private:
	Node *head;

public:
	void traversing(Node *head);
	int searchTarget(Node *head, int target);
	void addFront(Node *newNode);
};

void Linked::traversing(Node *head)
{
	Node *temp = head;
	while (temp != nullptr)
	{
		cout << temp->data << " ";
		temp = temp->next;
	}
}

int Linked::searchTarget(Node *head, int target)
{
	Node *temp = head;
	int i = 0;
	while (temp != nullptr)
	{
		if (temp->data == target)
			return i;
		temp = temp->next;
		i++;
	}
	return -1;
}
void Linked::addFront(Node *newNode, Node *head)
{
	newNode->next = head;
	newNode = head;
}

void search(Node *head, int target)
{
	Linked list;
	int result = list.searchTarget(head, target);

	if (result != -1)
		cout << "\nFound ! At " << result << endl;
	else
		cout << "\nNot found" << endl;
}
int main()
{
	int a, target;
	cin >> a >> target;

	// head va tail chua data va next
	Node *head = nullptr;
	Node *tail = nullptr;

	for (int i = 0; i < a; i++)
	{
		int x;
		cin >> x;
		Node *newNode = new Node(x);
		if (head == nullptr)
		{
			head = newNode;
			tail = newNode;
		}
		else
		{
			tail->next = newNode;
			tail = newNode;
		}
	}

	Linked list;
	list.traversing(head);

	system("pause");
	return 0;
}