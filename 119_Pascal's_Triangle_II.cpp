/* ***************************************************************************
 * File    : 119_Pascal's_Triangle_II.cpp
 * Author  : Kura Peng (kpeng) <https://github.com/sayakura>
 * Created : 2018/10/08
 * Updated : 2018/10/08
 * ***************************************************************************/
class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> curr;
        vector<int> temp;
        curr.push_back(1);
        for (int k = 1; k <= rowIndex; k++)
        {
            temp = curr;
            curr.clear();
            for (int j = 0; j <= k; j++)
                curr.push_back(1);
            for (int i = 1; i < k; i++)
               curr[i] = temp[i - 1] + temp[i];
        }
        return (curr);
    }
};

