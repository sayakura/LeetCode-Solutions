#include <iostream>
#include <string>
using namespace std;
struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if (head == NULL)
            return NULL;
        ListNode *prev = head;
        ListNode *curr = head->next;
        while (curr)
        {
            if (prev->val == curr->val)
                curr = curr->next; 
            else
            {
                prev->next = curr;
                prev = prev->next;
                curr = curr->next;
            }
        }
        prev->next = curr;
        return head;
    }
};
int main(void)
{
	ListNode *node1 = new ListNode;
    ListNode *node2 = new ListNode;
    ListNode *node3 = new ListNode;
	node1->val = 1;
	node2->val = 1;
    node3->val = 2;
    node1->next = node2;
    node2->next = node3;
    node3->next = NULL;
    for (node1)
    {
        cout << to_string(node1) << endl;
        node1 = node1->next;
    }
	return (0);
}
