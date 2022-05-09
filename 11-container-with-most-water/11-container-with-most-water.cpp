class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int i=0,j=n-1;
        int res=0;
        int area=0;
        while(i<j&&i>=0&&j<n)
        {
            area=min(height[i],height[j])*(j-i);
            res=max(res,area);
            
            if(height[i]==height[j])
            {
                if(height[i+1]>height[j-1])
                {
                    i++;
                }
                else
                    j--;
            }
            else if(height[i]<height[j])
                i++;
            else
                j--;
        }
        return res;
    }
};