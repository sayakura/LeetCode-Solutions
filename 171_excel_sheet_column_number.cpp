/* ***************************************************************************
 * File    : 171_excel_sheet_column_number.cpp
 * Author  : Kura Peng (kpeng) <https://github.com/sayakura>
 * Created : 2018/10/09
 * Updated : 2018/10/09
 * ***************************************************************************/
class Solution {
public:
    int titleToNumber(string s) {
        int res = 0;
        for (int i = 0; i < s.size(); i++)
            res = res * 26 + ((int)s[i] - 64);
        return res;
    }
};
