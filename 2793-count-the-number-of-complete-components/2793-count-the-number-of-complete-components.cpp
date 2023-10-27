class Solution {
public:
    void dfs(vector<int> adj[], vector<bool>& visited, int node, int &nodes, int& edges)
    {
        visited[node] = true;
        nodes++;
        edges+= adj[node].size();
        for(int i = 0; i < adj[node].size(); i++)
        {
            if(!visited[adj[node][i]])
            {
                dfs(adj, visited, adj[node][i], nodes, edges);
            }
        }
    }
    int countCompleteComponents(int n, vector<vector<int>>& edges) {
        vector<bool> visited(n);
        vector<int> adj[n];
        int no_components = 0;
        for(int i = 0; i < edges.size(); i++)
        {
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
        }
        int err = 0;
        for(int i = 0; i < n; i++)
        {
            if(!visited[i])
            {
                no_components++;
                int nodes = 0, edges = 0;
                dfs(adj, visited, i, nodes, edges);
                if (edges != (nodes*(nodes-1)))
                {
                    err++;
                }
            }
        }
        return no_components - err;
    }
};