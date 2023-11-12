class Solution {
public:
    vector<string> ans;
    void helper(string digits, int index, string current)
    {
        vector<string> base = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        if (index == digits.length())
        {
            ans.push_back(current);
            return;
        }
        string s = base[digits[index]-'0'];
        for (int i = 0; i < s.size(); i++)
        {
            helper(digits, index+1, current+s[i]);
        }
    }
    vector<string> letterCombinations(string digits) {
        if (digits == "")
            return {};
        helper(digits, 0, "");
        return ans;
    }
};