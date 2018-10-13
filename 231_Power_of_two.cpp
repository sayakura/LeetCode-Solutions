/* ***************************************************************************
 * File    : 231_Power_of_two.cpp
 * Author  : Kura Peng (kpeng) <https://github.com/sayakura>
 * Created : 2018/10/13
 * Updated : 2018/10/13
 * ***************************************************************************/
class Solution {
public:
    bool isPowerOfTwo(int n) {
    	if (n <= 0)
			return false;
		return ((n & (n - 1)) == 0);
	}
};
