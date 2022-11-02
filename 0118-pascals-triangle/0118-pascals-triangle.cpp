class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>pascaltriangl(numRows);
        for(int i=0;i<numRows;i++)
        {
            pascaltriangl[i].resize(i+1);
            pascaltriangl[i][0]=pascaltriangl[i][i]=1;
            for(int j=1;j<i;j++)
            {
                pascaltriangl[i][j]=pascaltriangl[i-1][j-1]+pascaltriangl[i-1][j];
            }
        }
        return pascaltriangl;
    }
};