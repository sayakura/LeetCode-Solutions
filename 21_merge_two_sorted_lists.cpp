#include <stdlib.h>
#include <iostream>
using namespace std;
struct ListNode
{
    int val;
    ListNode *next;
};

 ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if (l1 == NULL)
            return (l2 == NULL) ? NULL : l2;
        else if (l2 == NULL)
            return (l1 == NULL) ? NULL : l1;

        ListNode l3;
        ListNode *temp;
        temp = &l3;
        while (l1 && l2)
        {
            if (l1->val <= l2->val)
            {
                temp->next = l1;
                l1 = l1->next;
            }
            else
            {
                temp->next = l2;
                l2 = l2->next;
            }
            temp = temp->next;
        }
        if (l1 == NULL)
            temp->next = l2;
        else
            temp->next = l1;
        return l3.next;
    }
int main(void)
{
    ListNode *l1_0 = new ListNode;
    ListNode *l1_1 = new ListNode;
    ListNode *l1_2 = new ListNode;
    
    ListNode *l2_0 = new ListNode;
    ListNode *l2_1 = new ListNode;
    ListNode *l2_2 = new ListNode;
    
    l1_0->val = 1;
    l1_1->val = 2;
    l1_2->val = 4;
    l1_0->next = l1_1;
    l1_1->next = l1_2;
    l1_2->next = NULL;


    l2_0->val = 1;
    l2_1->val = 3;
    l2_2->val = 4;
    l2_0->next = l2_1;
    l2_1->next = l2_2;
    l2_2->next = NULL;
    ListNode *l3 =  mergeTwoLists(l1_0, l2_0);
    while (l3)
    {
        cout << l3->val << endl;
        l3 = l3->next;
    }
    //cout << l1->val << endl;
    return (0);
}
