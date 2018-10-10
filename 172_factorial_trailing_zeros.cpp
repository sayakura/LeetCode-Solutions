/* ***************************************************************************
 * File    : 172_factorial_trailing_zeros.cpp
 * Author  : Kura Peng (kpeng) <https://github.com/sayakura>
 * Created : 2018/10/09
 * Updated : 2018/10/09
 * ***************************************************************************/
class Solution {
public:
     int trailingZeroes(int n) {
        int result = 0;
        for(long long i=5; n/i>0; i*=5){
            result += (n/i);
        }
        return result;
    }
};
