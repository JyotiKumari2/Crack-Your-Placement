class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        //Approach 01
        // Using extra space
        // int n=matrix.size();
        // int m=matrix[0].size();
        // set<int>rows;
        // set<int>cols;
        // for(int i=0;i<n;i++)
        // {
        //     for(int j=0;j<m;j++)
        //     {
        //         if(matrix[i][j]==0)
        //         {
        //             rows.insert(i);
        //             cols.insert(j);
        //         }
        //     }
        // }
        // for(int i=0;i<n;i++)
        // {
        //     for(int j=0;j<m;j++)
        //     {
        //         if(rows.count(i) || cols.count(j))
        //         {
        //             matrix[i][j]=0;
        //         }
        //     }
        // }
        
        
        //Optimised Approach 
        int col0=1,n=matrix.size(),m=matrix[0].size();
        for(int i=0;i<n;i++)
        {
            if(matrix[i][0]==0) col0=0;
            for(int j=1;j<m;j++)
            {
                if(matrix[i][j]==0)
                {
                    matrix[i][0]=0;
                    matrix[0][j]=0;
                }
                
            }
        }
        
        for(int i=n-1;i>=0;i--)
        {
            for(int j=m-1;j>=1;j--)
            {
                if(matrix[i][0]==0 || matrix[0][j]==0)
                {
                    matrix[i][j]=0;
                }
            }
            if(col0==0) matrix[i][0]=0;
        }
    }
};