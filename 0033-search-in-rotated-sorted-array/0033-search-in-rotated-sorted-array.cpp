class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int start = 0;
        int end = nums.size() - 1;
        // find the pivot index
        
        while(start < end)
        {
            int mid = (start + end )/2;
            if(nums[mid] > nums[end])
            {
                start = mid + 1;
            }
            else
                end = mid;
        }
        int pivot = start;
        // Perform a modified binary search based on that pivot point.
        start = 0, end = nums.size() - 1;
        while(start <= end)
        {
            int mid = (start + end)/2;
            int realmid = (mid+pivot)%n;
            if(nums[realmid] == target)
                return realmid;
            else if(nums[realmid] > target)
                end = mid - 1;
            else
                start = mid + 1;
        }
        return -1;
    }
};