class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        stack<int> st;
        vector<int> ans(nums.size(),-1);
        for(int j = 0; j < 2; j++)
        {
            for(int i = 0; i < nums.size(); i++)
            {
                while(!st.empty() && nums[st.top()] < nums[i])
                {
                    int element = st.top();
                    st.pop();
                    ans[element] = nums[i];
                }
                st.push(i);
            }
        }
        
       /* int currmax = INT_MIN;
        for(int i = 0; i < nums.size(); i++)
        {
            currmax = max(currmax, nums[i]);
            if(ans[i] == -1 && currmax != nums[i])
            {
                ans[i] = currmax;
            }
        }*/
        return ans;
    }
};