class Solution {
public:
    void dfs(int node, vector<bool>& visited, vector<vector<int>>& rooms, int& count)
    {
        visited[node] = true;
        count++;
        for(int i = 0; i < rooms[node].size(); i++)
        {
            if(!visited[rooms[node][i]])
            {
                dfs(rooms[node][i], visited, rooms, count);
            }
            
        }
    }
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n = rooms.size();
        vector<bool> visited(n);
        int count = 0;
        dfs(0, visited, rooms, count);
        /*for(int i = 0; i < n; i++)
        {
            if(!visited[i])
            {
                dfs(i, visited, rooms, count);
            }
        }*/
        cout << count << endl;
        return count == n;
    }
};