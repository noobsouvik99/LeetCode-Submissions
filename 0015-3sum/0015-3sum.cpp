class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        // Code it yourself later but within the time limit of Data Structure II Study Plan.
        vector<vector<int>> ans;
        if(nums.size() < 3)
            return ans;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size() - 2; i++)
        {
            if ((i == 0) || (i > 0 && nums[i] != nums[i-1]))
            {
                int low = i+1, high = nums.size() - 1;
                int target = 0 - nums[i];
                while ( low < high)
                {
                    if (nums[low] + nums[high] == target)
                    {
                        vector<int> temp;
                        temp.push_back(nums[i]);
                        temp.push_back(nums[low]);
                        temp.push_back(nums[high]);
                        ans.push_back(temp);
                        while (low < high && nums[low] == nums[low+1])
                            low++;
                        while (low < high && nums[high] == nums[high - 1])
                            high--;
                        low++;
                        high--;
                    }
                    else if (nums[low] + nums[high] > target)
                    {
                        high--;
                    }
                    else
                    {
                        low++;
                    }
                }
                
            }
        }
        return ans;
    }
};