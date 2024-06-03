// https://leetcode.com/problems/append-characters-to-string-to-make-subsequence/description/

class Solution {
public:
    int appendCharacters(string s, string t) 
    {
        int i = 0;
        int j = 0;
        int c = 0;
        while(j<t.length() && i<s.length())
        {
            if(s[i]==t[j])
            {
                i++;
                j++;
                c++;
            }
            else i++;
        } 
        return t.length()-c;      
    }
};
