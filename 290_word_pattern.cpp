/* ***************************************************************************
 * File    : 290_word_pattern.cpp
 * Author  : Kura Peng (kpeng) <https://github.com/sayakura>
 * Created : 2018/10/13
 * Updated : 2018/10/13
 * ***************************************************************************/
class Solution {
public:
    bool wordPattern(string pattern, string str) {
        vector<string> arr;
        string s = "";
        unordered_map<char, string> umap;
        unordered_map<string, char> umap2;
        for (int i = 0; i < str.size(); i++)
        {
            if (str[i] != ' ')
                s += str[i];
            else
            {
                arr.push_back(s);
                s = "";
            }
        }
        arr.push_back(s);
        if (pattern.size() != arr.size())
            return false;
        for (int i = 0; i < pattern.size() && i < arr.size(); i++)
        {
            auto it = umap.find(pattern[i]);
            auto it2 = umap2.find(arr[i]);
            if (it == umap.end() && it2 == umap2.end())
            {
                umap[pattern[i]] += arr[i];
                umap2[arr[i]] = pattern[i];
            } 
            else if (it == umap.end() || it2 == umap2.end())
                return false;
            else
            {
               if (arr[i].compare(it->second) != 0)
                    return false;
            }
        }
        return true;
    }
};
