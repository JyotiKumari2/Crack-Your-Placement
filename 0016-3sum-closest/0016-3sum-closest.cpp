class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        
        
        int n=nums.size();
        int l,r;
        int closest=INT_MAX;
        int ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++)
        {
            // int sum=target-nums[i];
            l=i+1;
            r=n-1;
            while(l<r)
            {
                int s = nums[l]+nums[r]+nums[i];
                if(abs(target-s)<closest)
                {
                    closest=abs(target-s);
                    ans=s;
                }
                if(s>target)
                     r--;
                else
                    l++;
            }
        }
        return ans;
    }
};