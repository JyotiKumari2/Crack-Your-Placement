class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> a(3,0);
        int n=nums.size();
        
        sort(nums.begin(),nums.end());
        for(int k=0;k<n;k++)
        {
            int sum=nums[k]*-1;
            int i=k+1,j=n-1;
            while(i<j)
            {
                if(nums[i]+nums[j]<sum)
                    i++;
                else if(nums[i]+nums[j]>sum)
                    j--;
                else
                {
                    a[0]=nums[k];a[1]=nums[i];a[2]=nums[j];
                    ans.push_back(a);
                   
                    while(i<j&&nums[i]==a[1])
                        i++;
                    
                     
                    while(i<j&&nums[j]==a[2])
                        j--;
                }
            }
            
            
            while(k+1<n&&nums[k+1]==nums[k])
                k++;
        }
        return ans;
    }
};