class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        
        // Brute Force Approach (Using extra space) TC:O(N*N) SC:O(N*N)
        // int n=matrix.size();
        // vector<vector<int>>dummyMatrix(n,vector<int>(n,0));
        // for(int i=0;i<n;i++)
        // {
        //     for(int j=0;j<n;j++)
        //     {
        //         dummyMatrix[j][n-i-1]=matrix[i][j];
        //     }
        // }
        // for(int i=0;i<n;i++)
        // {
        //     for(int j=0;j<n;j++)
        //     {
        //         matrix[i][j]=dummyMatrix[i][j];
        //     }
        // }
        
        
        
        // Method 02 : Optimised Approach TC:O(N*N) SC:O(1)
        
        int n=matrix.size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        for(int i=0;i<n;i++)
        {
             reverse(matrix[i].begin(),matrix[i].end());
        }
    }
};