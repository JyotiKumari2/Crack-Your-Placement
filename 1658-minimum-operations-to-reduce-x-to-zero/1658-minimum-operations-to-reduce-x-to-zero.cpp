class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        
        
        int n=nums.size();
        int s=0;
       
        unordered_map<int,int>m;
        m[0]=-1;
        for(int i=0;i<n;i++)
        {
            s+=nums[i];
            m[s]=i;
        }
        int t=s-x;
        if(t<0)
            return -1;
        s=0;
        int res=INT_MIN;
        for(int i=0;i<n;i++)
        {
            s+=nums[i];
            if(m.find(s-t)!=m.end())
                res=max(res,i-m[s-t]);
        }
        return res==INT_MIN?-1:n-res;
    }
};