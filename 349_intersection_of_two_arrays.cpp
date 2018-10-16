/* ***************************************************************************
 * File    : 349_intersection_of_two_arrays.cpp
 * Author  : Kura Peng (kpeng) <https://github.com/sayakura>
 * Created : 2018/10/15
 * Updated : 2018/10/15
 * ***************************************************************************/
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        unordered_map<int, bool> ht;
        unordered_map<int, bool> ht2;
        if (nums1.size() == 0 || nums2.size() == 0)
            return {};
        for (int i = 0; i < nums1.size(); i++)
            if (!ht[nums1[i]])
                ht[nums1[i]] = true;
        for (int i = 0; i < nums2.size(); i++)
            if (ht[nums2[i]] && !ht2[nums2[i]])
            {
                ht2[nums2[i]] = true;
                result.push_back(nums2[i]);
            }
        return result;
    }
};


class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> nums1set(nums1.begin(),nums1.end());
        unordered_set<int> nums2set(nums2.begin(),nums2.end());
        vector<int> res;

        for(auto i : nums1set){
            if(nums2set.count(i)){
                res.push_back(i);
            }
        }
        return res;
    }
};
