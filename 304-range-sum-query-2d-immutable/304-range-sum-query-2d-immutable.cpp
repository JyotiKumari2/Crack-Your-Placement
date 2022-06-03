class NumMatrix {
 vector<vector<int>>dp;
public:
    NumMatrix(vector<vector<int>>& matrix) {
        if(matrix.size()==0 || matrix[0].size()==0)
            return;
        int row=matrix.size();
        int col=matrix[0].size();
        dp.resize(row,vector<int>(col+1,0));
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                dp[i][j+1]=dp[i][j]+matrix[i][j];
            }
        }
        
        
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        int sum=0;
        for(int i=row1;i<=row2;i++)
        {
            sum+=dp[i][col2+1]-dp[i][col1];
        }
        return sum;
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */