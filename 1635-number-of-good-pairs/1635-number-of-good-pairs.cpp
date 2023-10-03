class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        // thesis : kind of prefix sum , sum of their count for equal value pair
        unordered_map<int, int> mp;
        int count = 0;
        for(int i : nums)
        {
            count += mp[i];
            mp[i]++;
        }
        return count;
        /*
        for(int i = 0; i < nums.size(); i++)
        {
            for(int j = i+1; j < nums.size(); j++)
            {
                if(nums[i] == nums[j])
                    count++;
            }
        }
        return count;*/
    }
};