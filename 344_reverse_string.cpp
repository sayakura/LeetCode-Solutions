/* ***************************************************************************
 * File    : 344_reverse_string.cpp
 * Author  : Kura Peng (kpeng) <https://github.com/sayakura>
 * Created : 2018/10/15
 * Updated : 2018/10/15
 * ***************************************************************************/
class Solution {
public:
    string reverseString(string s) {
        for (int i = 0, j = s.size() - 1; i < j; i++, j--)
        {
            s[i] ^= s[j];
            s[j] ^= s[i];
            s[i] ^= s[j];
        }
        return s;
    }
};
