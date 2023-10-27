class Solution {
public:
    string longestPalindrome(string s) {
        int start = 0, end = s.size() -1;
        int maxlen = 0;
        for (int i =0; i<s.size(); i++)
        {
            int l = i, r = i;
            //odd_palindrome
            while (l >=0 && r <s.size() && s[l] == s[r])
            {
                if (r - l + 1 > maxlen)
                {
                    maxlen = r - l + 1;
                    start = l;
                }
                l--;
                r++;
            }

            //even_palidrome
            l = i , r = i + 1;

            while (l >=0 && r < s.size() && s[l] == s[r])
            {
                if (r - l + 1 > maxlen)
                {
                    maxlen = r - l + 1;
                    start = l;
                }
                l--;
                r++;
            }

        }
        return s.substr(start, maxlen);
    }
};