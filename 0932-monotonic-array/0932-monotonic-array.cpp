class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int cnt = 0;
        int n = nums.size();
        if (nums[0] <= nums[n-1])
        {
            for(int i = 0; i < nums.size()-1; i++)
            {
                if (nums[i] > nums[i+1])
                {
                    return false;
                }
                
            }

        }
        else
        {
            for(int i = 0; i < nums.size()-1; i++)
            {
                if (nums[i] < nums[i+1])
                {
                    return false;
                }
                
            }
        }
        return true;
    }
};