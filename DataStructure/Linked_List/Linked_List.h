#ifndef LINKED_LIST_H
#define LINKED_LIST_H

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
    void addFront(Node *newNode, Node *&head);
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
void Linked::addFront(Node *newNode, Node *&head)
{
    newNode->next = head;
    head = newNode;
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

#endif