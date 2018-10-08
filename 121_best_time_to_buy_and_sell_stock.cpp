/* ***************************************************************************
 * File    : 121_best_time_to_buy_and_sell_stock.cpp
 * Author  : Kura Peng (kpeng) <https://github.com/sayakura>
 * Created : 2018/10/08
 * Updated : 2018/10/08
 * ***************************************************************************/
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_here = 0, max = 0;
        for (int i = 1; i < prices.size(); i++)
        {
            max_here += (prices[i] - prices[i - 1]);
            if (max_here < 0)
                max_here = 0;
            if (max_here > max)
                max = max_here;
        }
        return max;
    }
};
