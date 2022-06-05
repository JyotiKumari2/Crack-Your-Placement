class Solution {
    void solve(int col,vector<string>&board, vector<vector<string>>&ans, vector<int>&leftRow, vector<int>&upperDia, vector<int>&lowerDia, int n)
    {
        if(col==n)
        {
            ans.push_back(board);
            return ;
        }
        
        for(int row=0;row<n;row++)
        {
            if(leftRow[row]==0 && lowerDia[row+col]==0 && upperDia[n-1+col-row]==0)
            {
                board[row][col]='Q';
                leftRow[row]=1;
                lowerDia[row+col]=1;
                upperDia[n-1+col-row]=1;
                solve(col+1,board,ans,leftRow,upperDia,lowerDia,n);
                board[row][col]='.';
                leftRow[row]=0;
                lowerDia[row+col]=0;
                upperDia[n-1+col-row]=0;
            }
        }
    }
public:
    int totalNQueens(int n)  {
        vector<vector<string>>ans;
        vector<string>board(n);
        string s(n,'.');
        for(int i=0;i<n;i++)
        {
            board[i]=s;
        }
        
        vector<int>leftRow(n,0), upperDia(2*n-1,0), lowerDia(2*n-1,0);
        solve(0,board,ans,leftRow,upperDia,lowerDia,n);
        return ans.size();
    }
};