/* ***************************************************************************
 * File    : 20_valid_parentheses.cpp
 * Author  : Kura Peng (kpeng) <https://github.com/sayakura>
 * Created : 2018/10/06
 * Updated : 2018/10/06
 * ***************************************************************************/

bool isValid(string s) {
        if(0 == s.length())
            return true;
        if (s.size() % 2 == 1)
            return false;
        stack<char> st;
        for (int i = 0; i < s.size(); i++)
        {
            switch(s[i])
            {
                case '[': st.push(s[i]);
                    break ;
                case '(': st.push(s[i]);
                    break ;
                case '{': st.push(s[i]);
                    break ;
                default :
                    if (!st.empty()){
                        switch(s[i])
                        {
                            case ']': 
                                if ( st.top() == '[') st.pop();
                                else return (false);
                                break ;
                            case '}': 
                                if ( st.top() == '{') st.pop();
                                else return (false);
                                break ;
                            case ')':
                                if ( st.top() == '(') st.pop();
                                else return (false);
                                break ; 
                        }
                    }
                    else
                        return (false);
                    break;
            }
        }
        if (!st.empty())
            return false;
        return true;
    }

class Solution {
public:
    bool isValid(string s) {
        if(0 == s.length())
            return true;
        if (s.size() % 2 == 1)
            return false;
        vector<char> stack;
        stack.push_back(s[0]);
        std::map<char, char> left_to_right = {{'{', '}'},
                                              {'[', ']'},
                                              {'(', ')'}};
        for(int i = 1;i < s.length();i++)
        {
            if(left_to_right[stack.back()] == s[i])
                stack.pop_back();
            else
                stack.push_back(s[i]);
        }
        if(stack.empty())
            return true;
        else
            return false;
    }
};
