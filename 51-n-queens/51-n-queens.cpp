// // Method --- 01


// class Solution {
// public:
//     bool isSafe(int row, int col, vector<string>&board, int n)
//     {
//         // Upper Diagonal
        
        
//         int dupRow=row;
//         int dupCol=col;
        
//         while(row>=0 &&col>=0)
//         {
//             if(board[row][col]=='Q')return false;
//             row--;
//             col--;
//         }
        
//         // Same row
//         row = dupRow;
//         col = dupCol;
//         while(col>=0)
//         {
//             if(board[row][col]=='Q') return false;
//             col--;
//         }
        
//         //Lower Diagonal
//         row = dupRow;
//         col = dupCol;
//         while(row<n && col>=0)
//         {
//             if(board[row][col]=='Q') return false;
//             row++;
//             col--;
//         }
        
//         return true;
//     }
    
//     void solve( int col, int n , vector<vector<string>>&ans, vector<string>&board)
//     {
//         // base case
//         if(col==n)
//         {
//             ans.push_back(board);
//             return;
//         }
//         for(int row=0;row<n;row++)
//         {
//             if(isSafe(row,col,board,n))
//             {
//                 board[row][col]='Q';
//                 solve(col+1,n,ans,board);
//                 board[row][col]='.';
//             }
//         }
//     }
//     vector<vector<string>> solveNQueens(int n) {
//         vector<vector<string>>ans;
//         vector<string>board(n);
//         string s(n,'.');
//         for(int i=0;i<n;i++)
//                 board[i]=s;
//         solve(0,n,ans,board);
//         return ans;
//     }
// };




// Method 02  Using hashing & Backtracking


class Solution {
public:
    
    
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
};