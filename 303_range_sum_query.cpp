/* ***************************************************************************
 * File    : 303_range_sum_query.cpp
 * Author  : Kura Peng (kpeng) <https://github.com/sayakura>
 * Created : 2018/10/15
 * Updated : 2018/10/15
 * ***************************************************************************/
class NumArray {
public:
    int *dp;
    NumArray(vector<int> nums) {
        int m=nums.size(),j;
        if(m>0){
            dp=new int[m];
            dp[0]=nums[0];
            for(j=1;j<m;j++)
                dp[j]=dp[j-1]+nums[j];
        }
        else
            dp=NULL;
    }
    
    int sumRange(int i, int j) {
        if(i==0)return dp[j];
        return dp[j]-dp[i-1];
    }
};

