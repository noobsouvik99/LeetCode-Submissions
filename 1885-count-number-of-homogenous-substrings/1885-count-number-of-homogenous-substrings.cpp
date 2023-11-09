class Solution {
public:
    int countHomogenous(string s) {
        long long int ans = 0,count =1;
        int m = 1000000007;

        for(int i = 1; i < s.size(); i++)
        {
            if (s[i] == s[i-1])
            {
                count++;
            }
            else
            {
                ans= (ans + (count * (count+1)/2));
                count = 1;
            }
        }
        ans = (ans + (count*(count+1)/2)) ;
        int res = ans%m;
        return res;
    }
};
