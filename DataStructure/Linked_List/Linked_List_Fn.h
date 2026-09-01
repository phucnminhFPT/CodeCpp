#ifndef LINKED_LIST_FN_H
#define LINKED_LIST__FN_H
#include "Linked_List.h"
using namespace std;

void createArrNode(Node *&tail, Node *&head) // 1. Create new Linked_List
{
    int n;
    cout << "Enter n : ";
    cin >> n;
    cout << "\nEnter element : ";
    for (int i = 0; i < n; i++)
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
            tail->next = newNode; // Trỏ next và node tiếp theo
            tail = newNode;       // Cập nhật lại tail : data, next
        }
    }
}

void traversingList(Node *head) // 2. Traversing array (show all element array)
{
    Node *temp = head;

    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

void addEleFront(Node *&head) // 3. Add new element from FRONT
{
    int x;
    cout << "Type new element : ";
    cin >> x;
    Node *newNode = new Node(x);
    newNode->next = head;
    head = newNode;
}

void addEleBack(Node *&tail) // 4. Add new element from BACK
{

    int x;
    cout << "Type element you want push back : ";
    cin >> x;
    Node *newNode = new Node(x);

    tail->next = newNode;
    newNode->next = nullptr;
    tail = newNode;
}

void addEleWithIndex(Node *&head) // 5. Add new element with enter index
{
    int x = 0, index = 0;
    cout << "Enter x : ";
    cin >> x;
    cout << "Enter Index : ";
    cin >> index;

    Node *temp = head;
    for (int i = 0; i < index - 1; i++)
        temp = temp->next;

    Node *newNode = new Node(x);

    newNode->next = temp->next;
    temp->next = newNode;
    temp = newNode;
}
void addRandomEle(Node *&head) //	6. Add element with random index
{
    srand(time(0));

    int valueRan = rand() % 100 + 1; // 1 -> 100
    int indexRan = rand() % 5;       // 0 -> 4

    cout << "Random value: " << valueRan << endl;
    cout << "Random index: " << indexRan << endl;

    int preI = 0;
    int postI = 0;
    Node *temp = head;

    // Đi đến node trước vị trí cần chèn
    for (int i = 0; i < indexRan; i++)
    {
        if (temp == nullptr)
        {
            cout << "Index " << indexRan << " no exist ! \n";
            cout << "Value : " << valueRan << " can't insert !\n";
            break;
        }
        temp = temp->next;
    }

    // Kiểm tra vị trí
    if (temp == nullptr)
    {
        cout << "Index " << indexRan << " no exist ! \n";
        cout << "Value : " << valueRan << " can't insert !\n";
        return;
    }

    // Chèn node
    Node *newNode = new Node(valueRan);
    newNode->next = temp->next;
    temp->next = newNode;
}
void deleteEleFront(Node *&head) // 8. Delete front element
{
    if (head == nullptr)
    {
        cout << "Linked_List was emptying ! please choice another option";
        exit;
    }

    Node *temp = head;
    head = head->next;
    delete (temp);
}

void deleteEleBack(Node *&tail) // 9.Delete back element
{
    Node *temp = tail;
    delete (temp);
    tail->next = nullptr;
}
void deleteEleRandom(Node *&head, Node *&tail) // 10. Delete random element
{
    srand(time(0));

    int valueRan = rand() % 100 + 1; // 1 -> 100
    int indexRan = rand() % 5;       // 0 -> 4

    Node * temp = head;
    while ()
    {
        /* code */
    }
    
    
}

void deleteEleIndex(Node *head)
{

    int index, x;
    cout << "Enter X and i : ";
    cin >> x >> index;

    Node *temp = head;

    for (int i = 0; i < index - 1; i++)
    {
        /* code */
    }
}
void searchEle(Node *&head) // 12. Search element
{
    int target = 0;
    cout << "Enter element want to find : ";
    cin >> target;
    Node *temp = head;
    int i = 0;
    while (temp->next != nullptr && temp->data != target)
    {
        temp = temp->next;
        i++;
    }
    if (temp == nullptr)
        cout << "Not found " << target << " !";
    else
        cout << "Found at index " << i;
}
#endif