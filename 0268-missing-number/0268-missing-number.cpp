class Solution {
public:
    int missingNumber(vector<int>& nums) {
       int sum = nums.size()*(nums.size()+1)/2;
       int actualsum = 0;
       for(int i : nums)
       {
           actualsum+= i;
       } 
       return sum - actualsum;
    }
};