class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int index = digits.size() - 1;
        for (int i = index; i >= 0; i--)
        {
            digits[i]++;
            if (digits[i] < 10)
                break ;
            else
                if (i > 0)
                    digits[i] = 0;     
                else
                    break ;
        }
        if (digits[0] == 10)
        {
            digits.push_back(0);
            digits[0] = 1;
        }
        return (digits);
    }
};
