class Solution {
public:
    vector<int> findBuildings(vector<int>& heights) {
        int n = heights.size();
        vector<int> ans;
        stack<int> st;
        for(int i = 0; i < n; i++)
        {
            while(!st.empty() && heights[st.top()] <= heights[i])
            {
                st.pop();
            }
            st.push(i);
        }
        //int size = st.size();
        while(st.size() > 0)
        {
            ans.push_back(st.top());
            st.pop();
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};