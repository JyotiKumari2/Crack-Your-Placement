class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int l=0;
        int r=nums.size()-1;
        vector<int>temp,res;
        temp=nums;
        sort(nums.begin(),nums.end());
       while(l<r)
       {
           if((nums[l]+nums[r])==target)
                break;
           else if((nums[l]+nums[r])>target)
                       r--;
           else
               l++;
       }
        for(int p=0;p<temp.size();p++)
        {
            if(temp[p]==nums[l])
                    res.push_back(p);
            else
                if(temp[p]==nums[r])
                      res.push_back(p);
        }
         
        return res;
    }
};