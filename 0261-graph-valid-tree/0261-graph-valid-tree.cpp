class Solution {
public:
	unordered_map<int,vector<int>> m;
	void dfs(vector<int>& visited, int cur)
	{
		visited[cur]=1;
		for(auto& x:m[cur])
		{
			if(visited[x]==0)
			{
				dfs(visited,x);
			}
		}
	}
	bool validTree(int n, vector<vector<int>>& edges) {

		for(auto& x:edges)
		{
			m[x[0]].push_back(x[1]);
			m[x[1]].push_back(x[0]);
		}

		vector<int> visited(n);
		dfs(visited,0);
		for(auto& x:visited)
		{
			if(x==0)
			{
				return false;
			}
		}

		if(edges.size()>=n) return false;    
		return true;

	}
};