class Solution {
public:
    int res(unordered_map<char, int>& mp)
    {
        int ln = INT_MAX, mn = INT_MIN;
        for(auto &it : mp)
        {
            mn = max(mn, it.second);
            ln = min(ln, it.second);
        }
        int rs = mn - ln;
        return rs > 0 ? rs : 0;
    }
    int beautySum(string s) {
        int n = s.size();
        int ans =0;
        for(int i = 0; i < n; i++)
        {
            unordered_map<char,int> mp;
            for(int j = i; j < n; j++)
            {
                mp[s[j]]++;
                ans += res(mp);
            }
        }
        return ans;

    }
};