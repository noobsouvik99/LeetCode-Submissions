class Solution {
public:
    int row, col;
    void dfs(vector<vector<char>>& board, int i, int j)
    {
        if (i < 0 || j < 0 || i >= row || j >= col )
            return;
        if (board[i][j] != 'O')
            return;
        board[i][j] = 'R';
        dfs(board, i+1, j);
        dfs(board, i-1, j);
        dfs(board, i, j+1);
        dfs(board, i, j-1);
    }
    void solve(vector<vector<char>>& board) {
        
        row = board.size();
        col = board[0].size();
        if (row < 3 || col < 3)
            return;
        for(int i = 0; i < row; i++)
        {
            for(int j = 0; j < col; j++)
            {
                if (i == 0 || j == 0 || i == row-1 || j == col-1)
                {
                    if (board[i][j] == 'O')
                    {
                        dfs(board, i , j);
                    }
                    
                }
            }
        }
        for(int i = 0; i < row; i++)
        {
            for(int j = 0; j < col; j++)
            {
                if (board[i][j] == 'O')
                {
                    board[i][j] = 'X';
                }
                else if (board[i][j] == 'R')
                {
                    board[i][j] = 'O';
                }
            }
        }
        
    }
};