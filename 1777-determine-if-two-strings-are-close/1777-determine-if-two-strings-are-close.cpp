class Solution {
public:
    bool closeStrings(string word1, string word2) {
        int m = word1.size();
        int n = word2.size();
        if (m != n)
            return false;
        vector<int> dic1(26,0);
        vector<int> dic2(26,0);
        for(char c : word1)
            dic1[c-'a']++;
        for(char c : word2)
            dic2[c-'a']++;
        for(int i = 0; i < 26; i++)
        {
            if ((dic1[i] == 0 && dic2[i] >0) || (dic2[i] == 0 && dic1[i] > 0))
                return false;
        }
        sort(dic1.begin(), dic1.end());
        sort(dic2.begin(), dic2.end());
        return (dic1 == dic2);
    }
};