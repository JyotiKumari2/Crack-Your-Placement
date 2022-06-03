class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        // Method 01 : LINEAR SEARCH || TC: O(m*n)  || SC: O(1)
        // int n=matrix.size();
        // int m=matrix[0].size();
        // for(int i=0;i<n;i++)
        // {
        //     for(int j=0;j<m;j++)
        //     {
        //         if(matrix[i][j]==target)
        //              return true;
        //     }
        // }
        // return false;
        
        
        // METHOD 02: BINARY SEARCH || TC: O(log(m+n)) || SC: O(1)|| MOST EFFICIENT APPROACH
        
        // int low=0;
        // int m=matrix.size();
        // int n=matrix[0].size();
        // int high=m*n-1;
        // while(low<=high)
        // {
        //      int mid=low+(high-low)/2;
        //     if(matrix[mid/n][mid%n]==target)
        //           return true;
        //     else if(matrix[mid/n][mid%n]<target)
        //               low=mid+1;
        //     else
        //         high=mid-1;
        // }
        // return false;
        
        
        
        //METHDO 03
        
        int m=matrix.size();
        int n=matrix[0].size();
        int i=0, j=n-1;
        while(i<m && j>=0)
        {
            if(matrix[i][j]==target)
                 return true;
            else
                if(matrix[i][j]>target)
                    j--;
            else
                i++;
                       
        }
        return false;
    }
};