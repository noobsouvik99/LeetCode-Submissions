class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int sum = 0;
        for(int i : nums)
        {
            sum+=i;
        }
        int n = nums.size();
        int maxi = -1;
        int left = 0, currentsum = 0;
        for(int right = 0; right < n; right++)
        {
            currentsum += nums[right];
            while (currentsum > sum -x && left <=right)
            {
                currentsum -= nums[left++];
            }
            if (currentsum == sum - x)
            {
                maxi = max(maxi, right - left+1);
            }

        }
        return maxi == -1 ? -1 : n - maxi;
    }
};