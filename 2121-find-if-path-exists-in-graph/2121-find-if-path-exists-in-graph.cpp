class Solution {
public:
    bool dfs(int source, vector<vector<int>>& graph, vector<bool>& visited, int dest)
    {
        if (source == dest)
            return true;
        visited[source] = true;
        for(int i = 0; i < graph[source].size(); i++)
        {
            if(visited[graph[source][i]] == false)
                if (dfs(graph[source][i], graph, visited, dest) == true)
                    return true;
        }
        return false;
    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<bool> visited(n,false);
        vector<vector<int>> graph(n);
        for(int i = 0 ; i < edges.size(); i++)
        {
            int v1 = edges[i][0];
            int v2 = edges[i][1];
            graph[v1].push_back(v2);
            graph[v2].push_back(v1);
        }
        return dfs(source, graph, visited, destination);
    }
};