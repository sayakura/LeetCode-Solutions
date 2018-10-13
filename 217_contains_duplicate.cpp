/* ***************************************************************************
 * File    : 217_contains_duplicate.cpp
 * Author  : Kura Peng (kpeng) <https://github.com/sayakura>
 * Created : 2018/10/13
 * Updated : 2018/10/13
 * ***************************************************************************/
//using a map
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        if (nums.size() == 0)
            return false;
        unordered_map<int, bool> map;
        for (int i = 0; i < nums.size(); i++)
        {
            if (map[nums[i]])
                return true;
            else
                map[nums[i]] = true;
        }
        return false;
    }
};


