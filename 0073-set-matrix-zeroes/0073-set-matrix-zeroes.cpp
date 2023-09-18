class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        /*int row = matrix.size();
        int col = matrix[0].size();
        vector<int> rowvec(row);
        vector<int> colvec(col);
        for(int i=0;i<row;i++)
        {
            for(int j = 0; j <col ;j++)
            {
                if(matrix[i][j] == 0)
                {
                    rowvec[i] = -1;
                    colvec[j] = -1;
                }
            }
        }
        
        for (int i =0;i<row;i++)
        {
             for (int j =0;j<col;j++)
            {
                if(rowvec[i] == -1 || colvec[j] == -1)
                {
                    matrix[i][j] = 0;
                }


            }
        }*/
        int row = matrix.size();
        int col = matrix[0].size();
        int col1 = 1;
        for(int i=0;i<row;i++)
        {
            if (matrix[i][0] == 0)
                col1=0;
            for(int j = 1; j <col ;j++)
            {
                if(matrix[i][j] == 0)
                {
                    matrix[i][0] = matrix[0][j] = 0;
                }
            }
        }
        
        for (int i = row -1; i>=0;i--)
        {
            for(int j = col-1; j>=1 ;j--)
            {
                if (matrix[i][0] == 0 || matrix[0][j] == 0)
                {
                    matrix[i][j] = 0;
                }
                
            }
            if (col1 == 0)
                matrix[i][0] = 0;
        }
    }
};