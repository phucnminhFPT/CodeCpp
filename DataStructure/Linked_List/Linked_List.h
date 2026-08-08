#ifndef LINKED_LIST_H
#define LINKED_LIST_H
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
#endif