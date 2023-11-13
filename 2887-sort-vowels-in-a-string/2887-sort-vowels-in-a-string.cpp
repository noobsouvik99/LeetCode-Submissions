class Solution {
public:
    string sortVowels(string s) {
        set<char> vowels = {'A', 'E', 'I', 'O', 'U', 'a', 'e', 'i', 'o', 'u'};
        vector<int> present;
        for(char c : s)
        {
            if(vowels.contains(c))
            {
                present.push_back(c-'A');
            }
        }
        sort(present.begin(), present.end());
        int k = 0;
        for(int i = 0; i < s.size(); i++)
        {
            if(vowels.contains(s[i]))
            {
                s[i] = (char)(present[k++] + 'A');
            }
        }
        return s;
    }
};