class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        // Approach 01
        // Using extra space
        int r=matrix.size();
        int c=matrix[0].size();
        set<int>rows;
        set<int>cols;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(matrix[i][j]==0)
                {
                    rows.insert(i);
                    cols.insert(j);
                }
            }
        }
        
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(rows.count(i) || cols.count(j))
                     matrix[i][j]=0;
            }
        }
    }
};