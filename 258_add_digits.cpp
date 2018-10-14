/* ***************************************************************************
 * File    : 258_add_digits.cpp
 * Author  : Kura Peng (kpeng) <https://github.com/sayakura>
 * Created : 2018/10/13
 * Updated : 2018/10/13
 * ***************************************************************************/
class Solution {
public:
    int addDigits(int num) {
        int digit = INT_MAX;
        while (digit >= 10)
        {
            digit = 0;
            for (; num; num /= 10)
                digit += num % 10;
            num = digit;
        }
        return digit;
    }
};
