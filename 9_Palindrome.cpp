/* ***************************************************************************
 * File    : 9_Palindrome.cpp
 * Author  : Kura Peng (kpeng) <https://github.com/sayakura>
 * Created : 2018/10/06
 * Updated : 2018/10/06
 * ***************************************************************************/
/*
Determine whether an integer is a palindrome. An integer is a palindrome when it reads the same backward as forward.

Example 1:

Input: 121
Output: true
Example 2:

Input: -121
Output: false
Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.
Example 3:

Input: 10
Output: false
Explanation: Reads 01 from right to left. Therefore it is not a palindrome.
Follow up:

Coud you solve it without converting the integer to a string?
*/

class Solution {
public:
    bool isPalindrome(int x) {
       if (x < 0)
            return (false);
        else if (x < 10)
            return (true);
        int temp = x;
        int i = 0;
        int divider = 1;
        while (temp /= 10)
        {
            i++;
            divider *= 10;
        }
        temp = i / 2;
        for (int j = 0; j <= temp; j++)
        {
            if ((x / divider) % 10 != x % 10)
                return (false);
            x %= divider;
            x /= 10;
            divider /= 100;
        }
        return (true);
    }
};

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0 || (x % 10 == 0 && x != 0))
            return false;
        int temp = 0;
        while (x > temp)
        {
            temp = temp * 10 + x % 10;
            x /= 10;
        }
        return (x == temp || x == temp / 10);
    }
};
