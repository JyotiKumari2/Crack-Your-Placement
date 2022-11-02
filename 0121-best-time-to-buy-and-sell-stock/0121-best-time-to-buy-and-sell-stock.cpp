class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
         
      
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