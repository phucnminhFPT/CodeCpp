#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution
{
public:
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {

        ListNode *ans = nullptr;
        ListNode *tail = nullptr;
        ListNode *newNode = nullptr;
        while (list1 != nullptr && list2 != nullptr)
        {
            if (list1->val < list2->val)
            {
                newNode = new ListNode(list1->val);
                list1 = list1->next;
            }
            else
            {
                newNode = new ListNode(list2->val);
                list2 = list2->next;
            }

            if (ans == nullptr)
            {
                ans = newNode;
                tail = newNode;
                tail->next = nullptr;
            }
            else
            {
                tail->next = newNode;
                tail = newNode;
            }
        }

        // Sau khi xu ly xong con du

        while (list1 != nullptr)
        {
            newNode = new ListNode(list1->val);
            if (ans == nullptr)
            {
                ans = newNode;
                tail = newNode;
                tail->next = nullptr;
            }
            else
            {
                tail->next = newNode;
                tail = newNode;
            }
            list1 = list1->next;
        }

        while (list2 != nullptr)
        {
            newNode = new ListNode(list2->val);
            if (ans == nullptr)
            {
                ans = newNode;
                tail = newNode;
                tail->next = nullptr;
            }
            else
            {
                tail->next = newNode;
                tail = newNode;
            }
            list2 = list2->next;
        }
        return ans;
    }
};

int main()
{

    system("pause");
    return 0;
}