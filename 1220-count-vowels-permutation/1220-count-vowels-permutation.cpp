class Solution 
{
    public:
     int mod=1000000007;
    int countVowelPermutation(int n) 
    {
       
        long long dp[n+1][5];
        memset(dp,0,sizeof(dp));
        for(int i=0;i<5;i++)
        {
            dp[1][i]=(long long)1;
        }
        for(int i=2;i<=n;i++)
        {
            dp[i][0]+=dp[i-1][1]%mod;
            dp[i][1]+=dp[i-1][0]%mod+dp[i-1][2]%mod;
            dp[i][2]+=dp[i-1][0]%mod+dp[i-1][1]%mod+dp[i-1][3]%mod+dp[i-1][4]%mod;
            dp[i][3]+=dp[i-1][2]%mod+dp[i-1][4]%mod;
            dp[i][4]+=dp[i-1][0]%mod;
            for(int j=0;j<5;j++)
            {
                dp[i][j]%=mod;
            }
        }
        return (int)((dp[n][0]%mod+dp[n][1]%mod+dp[n][2]%mod+dp[n][3]%mod+dp[n][4]%mod)%mod);
    }
};