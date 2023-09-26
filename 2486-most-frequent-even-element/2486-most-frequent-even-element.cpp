class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int num : nums)
        {
            if (num%2 == 0)
            {
                mp[num]++;
            }
        }
        int max = INT_MIN, min_num = -1;
        for(auto it : mp)
        {
            if (it.second > max)
            {
                max = it.second;
                min_num = it.first;
            }
            else if (it.second == max)
            {
                min_num = min(min_num, it.first);
            }
          //  cout << it.first << " " << it.second <<endl;

        }
        return min_num;
    }
};