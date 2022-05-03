class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        deque<int> q;
        vector<int> v(nums.size());
        v=nums;
        int c=0;
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++){
            if(v[i]!=nums[i])
                q.push_back(i);
        }
        if(q.empty())
            return 0;
        return q.back()-q.front()+1;
    }
};