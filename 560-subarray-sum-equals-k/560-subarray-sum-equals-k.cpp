class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
        int count=0;
        unordered_map<int,int>m;
        m[0]=1;
        int n=nums.size();
        int s=0;
        for(int i=0;i<n;i++)
        {
            s+=nums[i];
         
            if(m.count(s-k))
                 count+=m[s-k];
               m[s]++;
        }
        return count;
    }
};