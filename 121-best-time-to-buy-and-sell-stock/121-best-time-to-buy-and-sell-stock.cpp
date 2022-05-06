class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        // Method 01: Brute Force Approach TC:O(n*n)
        // Giving TLE
        // int max_diff=0;
        // for(int i=0;i<prices.size()-1;i++)
        // {
        //     for(int j=i+1;j<prices.size();j++)
        //     {
        //         max_diff=max(max_diff,(prices[j]-prices[i]));
        //     }
        // }
        // return max_diff;
        
        
        // Method 02: Optimal Approach TC:O(n) && SC:O(1)
        int minimal=prices[0];
        int profit=0;
        for(int i=1;i<prices.size();i++)
        {
            minimal=min(minimal,prices[i]);
            profit=max(profit,prices[i]-minimal);
        }
        return profit;
    }
};