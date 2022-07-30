// Same as fibo 

#include<bits/stdc++.h>
using namespace std ;
int countWays(int n, vector<int>&dp)
{
    if(n<=1)
       return n;
    

    if(dp[n]!=-1)
       return dp[n];
    return dp[n]=countWays(n-1,dp)+countWays(n-2,dp);
}
int  main()
{
    int n; //no of stairs

    cin>>n;
    vector<int>dp(n+1,-1);  // Memoization -----> top--->down approach

    int ans = countWays(n,dp);
    cout<<"There are total "<<ans<<" ways to reach "<<n<<"th stair.";
}