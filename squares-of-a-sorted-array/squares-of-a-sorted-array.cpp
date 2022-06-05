class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        vector<int>res(n);
        int k=n-1;
        int i=0;
        int j=n-1;
        int val1,val2;
        while(i<=j)
        {
            val1=nums[i]*nums[i];
            val2=nums[j]*nums[j];
            if(val1>val2)
            {
               res[k--]=val1;
                i++;
            }
            else if(val1<val2)
            {
                res[k--]=val2;
                j--;
            }
            else
            {
                res[k--]=val2;
                j--;
            }
        }
        return res;
        
    }
};