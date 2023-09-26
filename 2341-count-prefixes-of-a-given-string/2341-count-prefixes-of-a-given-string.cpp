class Solution {
    bool isprefix(string s, string t)
    {
        for(int i = 0; i < s.size(); i++)
        {
            if (s[i] != t[i])
                return false;
        }
        return true;
    }
public:
    int countPrefixes(vector<string>& words, string s) {
        int count = 0;
        for(string word : words)
        {
            if (isprefix(word, s))
                count++;
        }
        return count;
    }
};