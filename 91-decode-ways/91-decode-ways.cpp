class Solution {
public:
   int numDecodings(string s) {
        int i;
        if(s.size()==0)
            return 0;
       if(s[0] == '0')
           return 0;
        vector<int> dp(s.size());
        dp[0]=1;
        for(i=1; i<s.size(); i++)
        {
           if(s[i] != '0')
               dp[i] = dp[i] + dp[i-1];
            if(s[i-1]=='1' || (s[i-1]=='2' && s[i]<='6'))
            {
                if(i-2 >= 0)
                    dp[i] = dp[i]+dp[i-2];
                else
                    dp[i] = dp[i]+1;
            }
        }
        return dp[i-1];
    }
};