class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>pT(numRows);
        for(int i=0;i<numRows;i++)
        {
            pT[i].resize(i+1);
            pT[i][0]=pT[i][i]=1;
            for(int j=1;j<i;j++)
            {
                pT[i][j]=pT[i-1][j-1]+pT[i-1][j];
            }
        }
        return pT;
    }
};