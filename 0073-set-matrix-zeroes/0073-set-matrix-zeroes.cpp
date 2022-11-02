class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        
        //Method 01 (Using extra space)
        int n=matrix.size();
        int m=matrix[0].size();
//         set<int>rows;
//         set<int>cols;
//         for(int i=0;i<n;i++)
//         {
//             for(int j=0;j<m;j++)
//             {
//                 if(matrix[i][j]==0)
//                 {
//                     rows.insert(i);
//                     cols.insert(j);
//                 }
//             }
//         }
//         for(int i=0;i<n;i++)
//         {
//             for(int j=0;j<m;j++)
//             {
//                 if(rows.count(i) || cols.count(j))
//                 {
//                     matrix[i][j]=0;
                    
//                 }
//             }
//         }
        
        
        
        
        // Method 02 (Using Assumption that all the elements are non-negative number)
        // This methpd is in-valid if negative numbers are also the elements of the matrix
//         for(int i=0;i<n;i++)
//         {
//             for(int j=0;j<m;j++)
//             {
//                  if(matrix[i][j]==0)
//                  {
//                      int idx=i-1;
//                      while(idx>=0)
//                      { 
//                          if(matrix[idx][j]!=0)
//                            matrix[idx][j]=-1;
//                          idx--;
                         
//                      }
//                      idx=i+1;
//                      while(idx<n)
//                      {
//                          if(matrix[idx][j]!=0)
                         
//                              matrix[idx][j]=-1;
//                              idx++;
                         
//                      }
//                      idx=j-1;
//                      while(idx>=0)
//                      {
//                          if(matrix[i][idx]!=0)
//                              matrix[i][idx]=-1;
//                          idx--;
//                      }
//                      idx=j+1;
//                      while(idx<m){
//                          if(matrix[i][idx]!=0)
//                                    matrix[i][idx]=-1;
//                          idx++;
                             
//                      }

//                 }
                
//             }
//         }
        
//         for(int i=0;i<n;i++)
//         {
//             for(int j=0;j<m;j++)
//             {
//                 if(matrix[i][j]==-1)
//                     matrix[i][j]=0;
//             }
//         }
        
        
        
        // Method :03 (Optimised Approach: Using constant extra space: O(1)
        
        int col0=1;
        for(int i=0;i<n;i++)
        {
            if(matrix[i][0]==0)col0=0;
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
                    matrix[i][j]=0;
            }
            if(col0==0)
                matrix[i][0]=0;
        }
        
        
        
    }
};