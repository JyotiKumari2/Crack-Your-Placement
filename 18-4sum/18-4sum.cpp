class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        
        vector<vector<int>>ans;
        
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
               int left=j+1;
               int right=n-1;
                int rem = target - (nums[i]+nums[j]);
                while(left<right)
                {
                    if(nums[left]+nums[right]==rem)
                    {
                        vector<int>res(4,0);
                        res[0]=nums[i];
                        res[1]=nums[j];
                        res[2]=nums[left];
                        res[3]=nums[right];
                            
                        ans.push_back(res);
                       
                         while(left<right && nums[left]==res[2])
                            ++left;
                        while(left<right && nums[right]==res[3])
                              --right;
                        
                    }
                    else if(nums[left]+nums[right]>rem)
                           right--;
                    else
                        left++;
                 
                    
                }
                
                while(j<n-1 && nums[j+1]==nums[j]) ++j;
                
               
            }
            while(i<n-1 && nums[i+1]==nums[i]) ++i;
        }
        return ans;
    }
};