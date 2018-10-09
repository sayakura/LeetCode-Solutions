/* ***************************************************************************
 * File    : 125_Valid_Palindrome.cpp
 * Author  : Kura Peng (kpeng) <https://github.com/sayakura>
 * Created : 2018/10/08
 * Updated : 2018/10/08
 * ***************************************************************************/
class Solution {
public:
    bool isPalindrome(string s) {
        string str = "";
        for (int i = 0; i < s.size(); i++)
        {
            if (isupper(s[i]))
                str += tolower(s[i]);
            else if (islower(s[i]))
                str += s[i];
            else if (isdigit(s[i]))
                str += s[i];
        }
        for (int i = 0; i < str.size() / 2; i++)
            if (str[i] != str[str.size() - (i + 1)])
                return false;
        return true;
    }
};
​
class Solution {
public:
    bool isPalindrome(string s) {
        for (int i = 0, j = s.size() - 1; i < j; i++, j--)
        {
            while (!isalnum(s[i]))
                i++;
            while (!isalnum(s[j]))
                j--;
            if (i < j && tolower(s[i]) != tolower(s[j]))
                return false;
        }
        return true;
    }
};
// my solution the best!!
class Solution {
public:
    bool isPalindrome(string s) {
        int num = 0;
        for (int i = 0, j = s.size() - 1; i < j; i++, j--)
        {
            while (!isalnum(s[i]))
                i++;
            while (!isalnum(s[j]))
                j--;
            if (i < j)
            {
                num += (int)(tolower(s[i]));
                num -= (int)(tolower(s[j]));
                if (num != 0)
                    return false;
            }
        }
        return (num == 0);
    }
};
