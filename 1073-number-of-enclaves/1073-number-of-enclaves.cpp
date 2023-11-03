class Solution {
public:
    int row, col;
    void dfs(vector<vector<int>>& grid, int i, int j)
    {
        if( i < 0 || j < 0 || i >= row || j >= col || grid[i][j] != 1)
            return;
        grid[i][j] = -1;
        dfs(grid, i-1, j);
        dfs(grid, i+1, j);
        dfs(grid, i, j-1);
        dfs(grid, i , j+1);
    }
    int numEnclaves(vector<vector<int>>& grid) {
         row = grid.size();
         col = grid[0].size();
        int enclaves = 0;
        for(int i = 0; i < row; i++)
        {
            for(int j = 0; j < col; j++)
            {
                if (i == 0 || j == 0 || i == row-1 || j == col-1)
                {
                    if (grid[i][j] == 1)
                    {
                        dfs(grid, i , j);
                    }
                }
            }
        }
        for(int i = 0 ; i < row; i++)
        {
            for(int j = 0; j < col; j++)
            {
                if (grid[i][j] == 1)
                    enclaves++;
            }
        }
        return enclaves;
    }
};