class Solution {
public:
    int maxSubArrayLen(vector<int>& nums, int k) {
        unordered_map<long long int, long long int> sums;
        long long int cur_sum = 0;
        long long int max_len = 0;
        for(int i = 0; i < nums.size(); i++) {
            cur_sum += nums[i];
            /** case 1 : we get sum k from the start 0 **/
            if(cur_sum == k) {   
                max_len = i + 1;
            } 
            /** case 2 : we find the sum from start point sumed to (cur_sum - k) **/
            else if (sums.find(cur_sum - k) != sums.end()) { 
                max_len = max(max_len, i - sums[cur_sum - k]);
            }
            /** store the cur_sum into the map **/
            if(sums.find(cur_sum) == sums.end()) {
                sums[cur_sum]= i;
            }
        }
        return max_len;
    }
};