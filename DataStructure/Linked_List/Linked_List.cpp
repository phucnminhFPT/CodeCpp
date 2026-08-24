#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include "Linked_List.h"
#include "Linked_List_Fn.h"
using namespace std;

int Menu()
{
	int choice = -1;
	cout << "--------- LINKED LIST MENU ------------------- \n";
	cout << "1. Create new Linked_List \n";
	cout << "2. Traversing array (show all element array) \n";
	cout << "3. Add new element from FRONT \n";
	cout << "4. Add new element from BACK \n";
	cout << "5. Add new element with enter index\n";
	cout << "6. Add element with random index \n";
	cout << "7. At element with know index (Position) \n";
	cout << "8. Delete front element\n";
	cout << "9. Delete back element \n";
	cout << "10. Delete random element\n";
	cout << "11. Delete element with index\n";
	cout << "12. Search element \n";
	cout << "Choice your CHOICE -> ";
	cin >> choice;
	return choice;
}

int main()
{
	Node *tail = nullptr;
	Node *head = nullptr;

	int choice = Menu();
	while (choice >= 1 && choice <= 10)
	{
		switch (choice)
		{
		case 1: // 1. Create new Linked_List
			createArrNode(tail, head);
			traversingList(head);
			break;
		case 2: // 2. Traversing array (show all element array)
			traversingList(head);
			break;
		case 3: // 3. Add new element from FRONT
			addEleFront(head);
			traversingList(head);
			break;
		case 4: // 4. Add new element from BACK
			addEleBack(tail);
			traversingList(head);
			break;
		case 5: // 5. Add new element with enter index
			addEleWithIndex(head);
			traversingList(head);
			break;
		case 6: // 6. Add element with random index
			addRandomEle(head);
			traversingList(head);
			break;
		case 7: // 7. At element with know index (Position)
			addRandomEle(head);
			traversingList(head);
			break;
		case 8: // 8. Delete front element
			deleteEleFront(head);
			traversingList(head);
			break;
		case 9: // 9. Delete back element
			deleteEleBack(tail);
			traversingList(head);
			break;
		case 10: // 10. Delete random element
			deleteEleRandom(head, tail);
			traversingList(head);
			break;
		case 11: // Delete element with index

			break;
		case 12: // 11. Search element
			searchEle(head);
			break;
		default:
			break;
		}
		cout << endl;
		choice = Menu();
	}

	system("pause");
	return 0;
}