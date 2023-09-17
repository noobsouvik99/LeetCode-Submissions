class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        unordered_map<int,int> counts;
        for(auto i : nums)
            ++counts[i];
        priority_queue<int, vector<int>, greater<int>> pq;
        for(auto & i : counts)
        {
            pq.push(i.second);
            if(pq.size() > k)
                pq.pop();
        }
        for(auto & i : counts)
        {
            if(i.second >= pq.top())
                ans.push_back(i.first);
        }
        return ans;
    }
};