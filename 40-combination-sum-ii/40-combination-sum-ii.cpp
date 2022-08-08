class Solution {
public:
    void findCombinationSum2(int ind, vector<int>c, int t, vector<vector<int>>&ans,vector<int>&ds)
    {
        if(t==0)
        {
            ans.push_back(ds);
            return;
        }
        for(int i=ind;i<c.size();i++)
        {
            if(i>ind && (c[i]==c[i-1]))
              continue;
            if(t-c[i]<0)
                break;
            ds.push_back(c[i]);
            findCombinationSum2(i+1,c,t-c[i],ans,ds);
            ds.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& c, int t) {
        sort(c.begin(),c.end());
        vector<vector<int>>ans;
        vector<int>ds;
        findCombinationSum2(0,c,t,ans,ds);
        return ans;
    }
};