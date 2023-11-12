class Solution {
public:
    vector<vector<string>>ans;
    bool check (int row, int col, int n, vector<string>& current)
    {
        for(int i = 0; i < row; i++)
        {
            if (current[i][col] == 'Q')
                return false;
        }
        for(int i=row-1,j=col-1;i>=0 && j>=0;i--,j--)
        {
            if(current[i][j]=='Q')
                return false;
        }
        for(int i=row-1,j=col+1;i>=0 && j>=0;i--,j++) 
        {
            if(current[i][j]=='Q')
                return false;
        }
        return true;
    }
    void helper(vector<string>& current, int n, int row)
    {
        if (row == n)
        {
            ans.push_back(current);
        }
        for(int col = 0; col < n; col++)
        {
            if (check(row, col, n, current))
            {
                current[row][col] = 'Q';
                helper(current, n , row+1);
                current[row][col] = '.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<string> current(n, string(n,'.'));
        helper(current, n, 0);
        return ans;
    }
};