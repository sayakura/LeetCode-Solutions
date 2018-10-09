/* ***************************************************************************
 * File    : 136_single_number.cpp
 * Author  : Kura Peng (kpeng) <https://github.com/sayakura>
 * Created : 2018/10/08
 * Updated : 2018/10/08
 * ***************************************************************************/
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int num = nums[0];
        for (int i = 1; i < nums.size(); i++)
            num ^= nums[i];
        return num;
    }
};
