class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // Moore's Voting Algorithm  (optimised Solution: Time:O(n), Space: O(1))
        
        int count=0;
        int element =0;
        for(auto i:nums)
        {
            if(count ==0)
            {
                element =i;
            }
            if(i==element)
                count+=1;
            else
                count-=1;
        }
        return element;
    }
};