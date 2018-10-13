/* ***************************************************************************
 * File    : 242_valid_anagram.cpp
 * Author  : Kura Peng (kpeng) <https://github.com/sayakura>
 * Created : 2018/10/13
 * Updated : 2018/10/13
 * ***************************************************************************/
static const int _ = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    return 0;
}();
class Solution {
public:
    bool isAnagram(string s, string t) {
        int map[127] = {0};
        for (int i = 0; i < s.size(); i++)
            map[s[i]]++;
        for (int i = 0; i < t.size(); i++)
            map[t[i]]--;
        for (int i = 0; i < 127; i++)
            if (map[i])
                return false;
        return true;
    }
};
