/* ***************************************************************************
 * File    : 7_reverse_integer.c
 * Author  : Kura Peng (kpeng) <https://github.com/sayakura>
 * Created : 2018/10/06
 * Updated : 2018/10/06
 * ***************************************************************************/
/*
Given a 32-bit signed integer, reverse digits of an integer.

Example 1:

Input: 123
Output: 321
Example 2:

Input: -123
Output: -321
Example 3:

Input: 120
Output: 21
Note:
Assume we are dealing with an environment which could only store integers within the 32-bit signed integer range: [−2^31,  2^31 − 1]. For the purpose of this problem, assume that your function returns 0 when the reversed integer overflows.
*/
class Solution {
public:
    int reverse(int x) {
        long temp = 0;
        while (x != 0)
        {
            temp = temp * 10 + (x % 10);
            if (temp > 2147483648 || temp < -2147483648 )
                return (0);
            x /= 10;
        }
        return (temp);
    }
};