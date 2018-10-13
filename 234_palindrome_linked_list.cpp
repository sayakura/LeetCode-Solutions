/* ***************************************************************************
 * File    : 234_palindrome_linked_list.cpp
 * Author  : Kura Peng (kpeng) <https://github.com/sayakura>
 * Created : 2018/10/13
 * Updated : 2018/10/13
 * ***************************************************************************/

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if (head == NULL)
            return true;
        vector<int> arr;
        ListNode *temp = head;
        while (temp)
        {
            arr.push_back(temp->val);
            temp = temp->next;
        }
        int max = arr.size() / 2;
        for (int i = 0; i < max; i++)
        {
            if (arr[i] != arr[arr.size() - (i + 1)])
                return false;
        }
        return true;
    }
};

