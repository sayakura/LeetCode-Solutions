/* ***************************************************************************
 * File    : 350_intersection_of_two_arrays_II.cpp
 * Author  : Kura Peng (kpeng) <https://github.com/sayakura>
 * Created : 2018/10/15
 * Updated : 2018/10/15
 * ***************************************************************************/
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        if (nums1.size() < nums2.size())
            return (intersect(nums2, nums1));
        unordered_map<int, int> ht;
        vector<int> res;
        for (int i = 0; i < nums1.size(); i++)
                ht[nums1[i]]++;
        for (int i = 0; i < nums2.size(); i++)
            if (ht[nums2[i]])
            {
                res.push_back(nums2[i]);
                ht[nums2[i]]--;
            }
                
        return res;
    }
};
