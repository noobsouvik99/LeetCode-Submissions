class Solution {
public:
    void dfs(vector<int> adj[], vector<bool>& visited, int node)
    {
        visited[node] = true;
        for(int i = 0; i < adj[node].size(); i++)
        {
            if(!visited[adj[node][i]])
            {
                dfs(adj, visited, adj[node][i]);
            }
        }
    }
    int countComponents(int n, vector<vector<int>>& edges) {
        vector<bool> visited(n);
        vector<int> adj[n];
        int no_components = 0;
        for(int i = 0; i < edges.size(); i++)
        {
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
        }
        for(int i = 0; i < n; i++)
        {
            if(!visited[i])
            {
                no_components++;
                dfs(adj, visited, i);
            }
        }
        return no_components;
    }
};