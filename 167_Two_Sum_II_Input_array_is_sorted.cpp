/* ***************************************************************************
 * File    : 167_Two_Sum_II_Input_array_is_sorted.cpp
 * Author  : Kura Peng (kpeng) <https://github.com/sayakura>
 * Created : 2018/10/08
 * Updated : 2018/10/08
 * ***************************************************************************/
/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* numbers, int numbersSize, int target, int* returnSize) {
    *returnSize = 2;
    int *res = malloc(sizeof(int) * 2);
    int i = 0;
    int j = numbersSize - 1;
    while (1)
    {
        if (numbers[i] + numbers[j] > target) 
            j--;
        else if (numbers[i] + numbers[j] < target)
            i++;
        else
        {
            res[0] = i + 1;
            res[1] = j + 1;
            return res;
        }
    }
}

