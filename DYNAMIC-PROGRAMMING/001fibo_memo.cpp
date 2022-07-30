// Memoization
// TC:O(n)
// SC:O(n+n)


#include<bits/stdc++.h>
using namespace std;
int fibo(int n, vector<int>&dp)
{
    if(n<=n)
       return n;
    if(dp[n]!=-1)
       return dp[n];
    return dp[n]=fibo(n-1,dp)+fibo(n-2,dp);

}
int main()
{
    int n;
    cout<<"Enter n:";
    cin>>n;
    vector<int>dp(n+1,-1);
    int ans = fibo(n,dp);
    cout<<"Nth fibo is: "<<ans<<"\n";
    return 0;
    
    
    return 0;
}