/* ***************************************************************************
 * File    : 345_reverse_vowels_of_a_string.cpp
 * Author  : Kura Peng (kpeng) <https://github.com/sayakura>
 * Created : 2018/10/15
 * Updated : 2018/10/15
 * ***************************************************************************/
class Solution {
private:
    bool isVowel( char c ) const {
        return c == 'a' 
            || c == 'e' 
            || c == 'i' 
            || c == 'o' 
            || c == 'u'
            || c == 'A' 
            || c == 'E' 
            || c == 'I' 
            || c == 'O'
            || c == 'U';
    }
public:
    string reverseVowels(string s) {
        int i = 0;
        int j = s.length() - 1;
        while ( i <= j ) {
            while ( i <= j && !isVowel( s[i] ) ) ++i;
            while ( i <= j && !isVowel( s[j] ) ) --j;
            if ( !( i <= j ) ) break;
            char temp = s[i];
            s[i] = s[j];
            s[j] = temp;
            ++i;
            --j;
        }
        return s;
    }
};
