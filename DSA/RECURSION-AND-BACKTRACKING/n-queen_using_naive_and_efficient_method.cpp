 #include<bits/stdc++.h>
 using namespace std;

    void solve(int col, vector<vector<string>>&ans, vector<string>&board, int n, vector<int>&leftRow, vector<int>&lowerDiagonal, vector<int>&upperDiagonal)
    {
        
        if(col==n)
        {
            ans.push_back(board);
            return;
        }
        
        for(int row=0;row<n;row++)
        {
            if(leftRow[row]==0 && lowerDiagonal[row+col]==0 && upperDiagonal[n-1+col-row]==0)
            {
                 board[row][col]='Q';
                 leftRow[row]=1;
                 lowerDiagonal[row+col]=1;
                 upperDiagonal[n-1+col-row]=1;
                 solve(col+1,ans,board,n,leftRow,lowerDiagonal,upperDiagonal);
                 //backTrack
                 board[row][col]='.';
                 leftRow[row]=0;
                 lowerDiagonal[row+col]=0;
                 upperDiagonal[n-1+col-row]=0;
            }
            
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        
        vector<vector<string>>ans;
        vector<string>board(n);
        string s(n,'.');
        for(int i=0;i<n;i++)
              board[i]=s;
        
        vector<int>leftRow(n,0), upperDiagonal(2*n-1,0), lowerDiagonal(2*n-1,0);
        solve(0,ans,board,n,leftRow,lowerDiagonal,upperDiagonal);
        return ans;
        
    }

    int main()
    {
        int n;
        cout<<"Enter size of board:\n";
        cin>>n;
        vector<vector<string>>res = solveNQueens(n);
        for(int i=0;i<res.size();i++)
        {
            for(int j=0;j<res[i].size();j++)
               cout<<res[i][j]<<" ";
            cout<<"\n";
        }

        return 0;
    }
 