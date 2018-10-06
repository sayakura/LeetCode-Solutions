/* ***************************************************************************
 * File    : 14_longest_common_prefix.cpp
 * Author  : Kura Peng (kpeng) <https://github.com/sayakura>
 * Created : 2018/10/06
 * Updated : 2018/10/06
 * ***************************************************************************/
#include <string>
#include <vector>
#include <iostream>
using namespace std;
string longestCommonPrefix(vector<string>& strs) {
    if (strs.empty()) return "";
    string prefix = "";
    for (unsigned int i = 0; i < strs.front().size(); i++)
    {
        char temp = strs.front()[i];
        unsigned int j = 1;
        for (; j < strs.size() ; j++)
        {
            if (i == strs[j].size() || temp != strs[j][i])
                return (prefix);
        }
         prefix.push_back(temp);
    }
    return (prefix);
}

string longestCommonPrefix2(vector<string>& strs) {
     if (strs.empty()) return "";
     string prefix = strs[0];
     for (int i = 1; i < strs.size(); i++)
     {
        int j = 0;
        for (; prefix[j] == strs[i][j]; j++)
            ;
        prefix = prefix.substr(0, j);
     }
     return (prefix);
}

string longestCommonPrefix2(vector<string>& strs) {
     if (strs.empty()) return "";
     string prefix = strs[0];
     for (int i = 1; i < strs.size(); i++)
     {
        int j = 0;
        for (; prefix[j] == strs[i][j]; j++)
            ;
        prefix = prefix.substr(0, j);
     }
     return (prefix);
}


int main(void)
{
	vector<string> strs;
	strs.push_back("flower");
	strs.push_back("fl");
	//strs.push_back("flight");
	strs.push_back("fl");
	cout << longestCommonPrefix2(strs) << endl;
	return (0);
}

/*

Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".

Example 1:

Input: ["flower","flow","flight"]
Output: "fl"
Example 2:

Input: ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings.
Note:

All given inputs are in lowercase letters a-z.
*/