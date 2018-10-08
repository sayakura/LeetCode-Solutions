class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;
        vector<int> temp;
        for (int i = 0; i < numRows; i++)
        {
            for (int j = 0; j <= i; j++)
                temp.push_back(1);
            res.push_back(temp);
            temp.clear();
        }
        if (numRows <= 2)
            return res;
        for (int i = 2; i < numRows; i++)
        {
            for (int j = 1; j < i; j++)
                    res[i][j] = res[i - 1][j - 1] + res[i - 1][j];
        }
        return res;
    }
};
