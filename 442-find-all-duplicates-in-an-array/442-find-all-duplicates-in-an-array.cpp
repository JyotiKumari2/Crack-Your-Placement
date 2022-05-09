class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        // Space Complexity : O(N)
        // vector<int>ans;
        // unordered_map<int,int>mp;
        // for(int i=0;i<nums.size();i++)
        //       mp[nums[i]]++;
        // for(auto i:mp)
        //     if(i.second==2)
        //            ans.push_back(i.first);
        // return ans;
        
        
        // Space Complexity SC: O(1) in-place
        vector<int>ans;
        for(int i=0;i<nums.size();i++)
        {
            int index=nums[i];
            if(index<0)
            {
                index=abs(index);
                if(nums[index-1]<0)
                {
                    ans.push_back(index);
                }
                else{
                    nums[index-1]*=-1;
                }
            }
            else{
                if(nums[index-1]<0)
                {
                    ans.push_back(index);
                }
                else{
                    nums[index-1]*=-1;
                }
            }
        }
        return ans;
    }
};