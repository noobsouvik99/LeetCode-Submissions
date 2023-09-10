class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int,int> store;
        vector<int> result;
        for(int i = 0; i<nums.size();i++)
        {
            int no_to_find = target - nums[i];
            if(store.find(no_to_find) != store.end())
            {
                result.push_back(store[no_to_find]);
                result.push_back(i);
            }
            store[nums[i]] = i;
        }
        return result;
    }
};