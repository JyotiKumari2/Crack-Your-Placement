class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
         
            int l=nums.size();
            int n1=-1,n2=-1,cnt1=0,cnt2=0;
            for(int i=0;i<l;i++)
            {
                if(nums[i]==n1)
                {
                    cnt1++;
                }
                else if(nums[i]==n2)
                    cnt2++;
                else if(cnt1==0)
                {
                    n1=nums[i];
                    cnt1=1;
                }
                else
                 if(cnt2==0)
                 {
                     n2=nums[i];
                     cnt2=1;
                 }
                else{
                    cnt1--;
                    cnt2--;
                }
            }
        vector<int>res;
        cnt1=cnt2=0;
        for(int i=0;i<l;i++)
        {
            if(nums[i]==n1)
            {
                cnt1++;
            }
            else if(nums[i]==n2)
                cnt2++;
        }
        if(cnt1>l/3)
        {
            res.push_back(n1);
        }
        if(cnt2>l/3)
        {
            res.push_back(n2);
        }
         return res;
    }
};