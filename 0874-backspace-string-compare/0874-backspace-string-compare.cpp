class Solution {
public:
    string getString(string s)
    {
        int count = 0;
        string result = "";
        for(int i = s.length()-1; i >= 0; i--)
        {
            if(s[i] == '#')
                count++;
            else
            {
                if(count > 0)
                    count--;
                else
                    result +=s[i];
            }
        }
        return result;
    }
    bool backspaceCompare(string s, string t) {
        return getString(s) == getString(t);
    }
};