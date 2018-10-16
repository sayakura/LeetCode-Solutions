/* ***************************************************************************
 * File    : 367_valid_perfect_square.cpp
 * Author  : Kura Peng (kpeng) <https://github.com/sayakura>
 * Created : 2018/10/15
 * Updated : 2018/10/15
 * ***************************************************************************/
class Solution {
public:
    bool isPerfectSquare(int num) {
        if (num == 1) {
            return true;
        }
        
        long long low = 1;
        long long high = num / 2;
        while (low <= high) {
            auto mid = low + (high - low) / 2;
            auto val = mid * mid;
            if (val == num) {
                return true;
            }
            
            if (val < num) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        
        return false;
    }
};
