class Solution {
public:
    int lengthOfLastWord(string s) {
        int len = 0;
        int i = s.size() - 1;
         while (isspace(s[i]))
                i--;
        for (; i >= 0 && !(isspace(s[i])); i--)
            len++;
        return (len);
    }
};
