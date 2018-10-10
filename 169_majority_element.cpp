/* ***************************************************************************
 * File    : 169_majority_element.cpp
 * Author  : Kura Peng (kpeng) <https://github.com/sayakura>
 * Created : 2018/10/09
 * Updated : 2018/10/09
 * ***************************************************************************/
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int major = nums[0], count = 1;
        if (nums.size() == 1)
            return nums[0];
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] == major)
                count++;
            else
                count--;
            if (count == 0)
            {
                count++;
                major = nums[i];
            }
        }
        return major;
    }
};
