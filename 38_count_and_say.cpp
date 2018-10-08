class Solution {
public:
    string countAndSay(int n) {
        if (n == 1)
            return "1";
        string str = countAndSay(n - 1);
        string res = "";
        int count = 1;
        for (int i = 1; i <= str.size(); i++)
        {
            if (i == str.size())
            {
                res += to_string(count);
                res += str[i - 1];
                break ;
            }
            if (str[i] == str[i - 1])
                count++;
            else
            {
                res += to_string(count);
                res += str[i - 1];
                count = 1;
            }
        }
        return res;
    }
};
