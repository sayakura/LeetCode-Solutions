/* ***************************************************************************
 * File    : 141_linked_list_cycle.cpp
 * Author  : Kura Peng (kpeng) <https://github.com/sayakura>
 * Created : 2018/10/08
 * Updated : 2018/10/08
 * ***************************************************************************/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if (head == nullptr)
            return false;
        auto *slow = head;
        auto *fast = head->next;
        while (fast && fast->next && slow != fast)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow == fast;
    }
};
