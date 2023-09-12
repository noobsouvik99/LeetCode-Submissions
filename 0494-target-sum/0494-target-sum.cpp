class Solution {
public:
    int count = 0;
    int findTargetSumWays(vector<int>& nums, int target) {
        calculate(nums, 0, 0, target);
        return count;
    }
    void calculate(vector<int>& nums, int i, int sum, int target)
    {
        if (i == nums.size())
        {
            if(sum == target)
                count++;
        }
        else
        {
            calculate(nums, i+1, sum+nums[i], target);
            calculate(nums, i+1, sum-nums[i], target);
        }
    }
};