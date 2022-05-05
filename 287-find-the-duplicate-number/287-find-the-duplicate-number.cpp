class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        
        // Approach 1: Using map (tc: O(n), sc:O(n))
        // code starts
        int ans=0;
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++)
            m[nums[i]]++;
        for(auto i:m)
            if(i.second>1)
                ans =i.first;
        return ans;
        // code ends
        
    }
};