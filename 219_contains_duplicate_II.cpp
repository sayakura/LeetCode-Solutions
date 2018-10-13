/* ***************************************************************************
 * File    : 219_contains_duplicate_II.cpp
 * Author  : Kura Peng (kpeng) <https://github.com/sayakura>
 * Created : 2018/10/13
 * Updated : 2018/10/13
 * ***************************************************************************/
static int speedUp = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> map;
        for (int i = 0; i < nums.size(); i++)
        {
            if (map[nums[i]] > 0)
                if ((i + 1 - map[nums[i]]) <= k)
                    return true;
            map[nums[i]] = i + 1;
        }
        return false;
    }
};
