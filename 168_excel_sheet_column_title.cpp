/* ***************************************************************************
 * File    : 168_excel_sheet_column_title.cpp
 * Author  : Kura Peng (kpeng) <https://github.com/sayakura>
 * Created : 2018/10/09
 * Updated : 2018/10/09
 * ***************************************************************************/
class Solution {
public:
    string convertToTitle(int n) {
        string alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        string ans;
        while(n){
            n--;
            ans = alpha[n % 26] + ans;
            n = n / 26;      
        }
         return ans;
    }
};
