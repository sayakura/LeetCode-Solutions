/* ***************************************************************************
 * File    : 122_best_time_to_buy_and_sell_stock_2.cpp
 * Author  : Kura Peng (kpeng) <https://github.com/sayakura>
 * Created : 2018/10/08
 * Updated : 2018/10/08
 * ***************************************************************************/
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max = 0;
        for (int i = 1; i < prices.size(); i++)
        {
            int diff = prices[i] - prices[i - 1];
            max += (diff < 0) ? 0 : diff; 
        }
        return max;
    }
};
