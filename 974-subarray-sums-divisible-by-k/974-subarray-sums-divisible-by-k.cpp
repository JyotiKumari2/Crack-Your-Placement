class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n=nums.size();
        int s=0;
        unordered_map<int,int>rem;
        rem[0]=1;
        int count=0;
        for(int i=0;i<n;i++)
        {
             
            s+=nums[i];
            if(s%k<0)
            {
                rem[(s%k)+k]++;
                if(rem[(s%k)+k]>1)
                    count+=rem[(s%k)+k]-1;
            }
            else
            {
                rem[s%k]++;
                if(rem[(s%k)]>1)
                    count+=rem[(s%k)]-1;
            }
                 
        }
        return count;
        
    }
};