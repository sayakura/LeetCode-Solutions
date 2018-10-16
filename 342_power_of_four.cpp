/* ***************************************************************************
 * File    : 342_power_of_four.cpp
 * Author  : Kura Peng (kpeng) <https://github.com/sayakura>
 * Created : 2018/10/15
 * Updated : 2018/10/15
 * ***************************************************************************/
class Solution {
public:
    int max = 1073741824;
    bool isPowerOfFour(int num) {
       if (num==0) 
        return false;
    
        if (num & (num-1))  // a power of 4 starts with a one, and 2k zeros, (e.g  100=4,10000=16......)
            return false;  // this step checks if num contains only 1 one

        return num & 0X55555555; //(0101 0101 0101 0101 0101 0101 0101)  
                                 // after the last step, we check if the zeros follow the correct pattern
    }
};
