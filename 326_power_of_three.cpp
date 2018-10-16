/* ***************************************************************************
 * File    : 326_power_of_three.cpp
 * Author  : Kura Peng (kpeng) <https://github.com/sayakura>
 * Created : 2018/10/15
 * Updated : 2018/10/15
 * ***************************************************************************/
class Solution {
public:
    int max = 1162261467;
    bool isPowerOfThree(int n) {
        if (n <= 0 || n > max) return false;
        return max % n == 0;
    }
};
