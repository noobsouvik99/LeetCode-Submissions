class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map <char,int> last_seen;
        int max_length = 0;
        int start = 0;
        int j;
        for(j = 0; j<s.size();j++)
        {
            if(last_seen.find(s[j]) != last_seen.end())
            {
                start = max(start, last_seen[s[j]] + 1);
            }
            last_seen[s[j]] = j;
            max_length = max(max_length, j - start + 1);
        }
        return max_length;
    }
};