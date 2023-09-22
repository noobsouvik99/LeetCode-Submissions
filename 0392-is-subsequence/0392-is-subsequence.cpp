class Solution {
public:
    bool isSubsequence(string s, string t) {
        int slength = s.length();
        int tlength = t.length();
        if(slength > tlength)
            return false;
        int sindex = 0;
        for(int i=0; i <tlength; i++)
        {
            if(s[sindex] == t[i])
            {
               sindex++; 
            }
        }
        return (sindex == slength);
    }
};