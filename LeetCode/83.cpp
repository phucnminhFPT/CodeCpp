#include <iostream>

using namespace std;


/**
 * Definition for singly-linked list.
 */
struct ListNode {
	int val;
	ListNode *next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
	public:
		ListNode* deleteDuplicates(ListNode* head) {
			if (head == nullptr)
				return nullptr;
			
			ListNode *curNode = head;
			ListNode *nextNode = head->next;

			while (nextNode != nullptr) {
				if (curNode->val == nextNode->val) {
					ListNode *temp = nextNode;
					curNode->next = nextNode->next;
					nextNode = nextNode->next;
					delete(temp);
				} else {
					curNode = nextNode;
					nextNode = nextNode->next;
				}
			}
			
			return head;
		}
};

int main () {

	system("pause");
	return 0;
}