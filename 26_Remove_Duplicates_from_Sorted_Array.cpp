/* ***************************************************************************
 * File    : 26_Remove_Duplicates_from_Sorted_Array.cpp
 * Author  : Kura Peng (kpeng) <https://github.com/sayakura>
 * Created : 2018/10/06
 * Updated : 2018/10/06
 * ***************************************************************************/
class Solution {
public:
    void remove(vector<int>& vec, size_t pos)
    {
        vector<int>::iterator it = vec.begin();
        advance(it, pos);
        vec.erase(it);
    }
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() == 0 || nums.size() == 1)
            return nums.size();
        int temp = nums[0];
        int count = 1;
        for (int i = 1; i < nums.size(); i++)
        {
            if (temp != nums[i])
            {
                count++;
                temp = nums[i];
            }
            else
                remove(nums, i--);

        }
        return count;
    }
};
