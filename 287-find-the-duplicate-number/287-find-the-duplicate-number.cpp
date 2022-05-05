class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        
        // My Approach 1: Using map (tc: O(n), sc:O(n))
        // code starts
        // int ans=0;
        // unordered_map<int,int>m;
        // for(int i=0;i<nums.size();i++)
        //     m[nums[i]]++;
        // for(auto i:m)
        //     if(i.second>1)
        //         ans =i.first;
        // return ans;
        // // code ends
        
        
        // Tutorial-------> //
        
        // Approach 01 : Using Sorting -----> Starts
        // TC: O(nlogn)
        // SC: O(logn)
        // sort(nums.begin(),nums.end());
        // for(int i=1;i<nums.size();i++)
        // {
        //     if(nums[i]==nums[i-1])
        //           return nums[i];
        // }
        // return -1;
        
        // Sort method ends
        
        
        //Appoach 02: Using Set data structure
        // Code starts
            unordered_set<int>s;
             for(auto i: nums)
             {
                 if(s.count(i))
                        return i;
                 s.insert(i);
             }
        return -1;
        
        // code ends
        
    }
};