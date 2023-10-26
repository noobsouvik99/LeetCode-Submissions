class Solution {
public:
    void dfs(int node, vector<vector<int>>& isConnected, vector<bool>& visited)
    {
        visited[node] = true;
        for(int i = 0; i < isConnected.size(); i++)
        {
            if (isConnected[node][i] && !visited[i])
            {
                dfs(i, isConnected, visited);
            }
        } 
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<bool> visited(n);
        int no_components = 0;
        for(int i = 0; i < n; i++)
        {
            if (!visited[i])
            {
                no_components++;
                dfs(i, isConnected, visited);
            }
        }
        return no_components;
    }
};