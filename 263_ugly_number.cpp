/* ***************************************************************************
 * File    : 263_ugly_number.cpp
 * Author  : Kura Peng (kpeng) <https://github.com/sayakura>
 * Created : 2018/10/13
 * Updated : 2018/10/13
 * ***************************************************************************/
class Solution {
public:
    bool isUgly(int num) {
        int i = 2;
        while (i <= 5 && num > 1)
        {
            if (num % i == 0)
                num /= i;
            else
                i += 1;
        }
        if (num == 1 && i <= 5)
            return true;
        else
            return false;
    }
}
