#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long int

ll solve(ll n,vector<ll>&dp)
{
    if(n<0)
      return 0%mod;
    if(n==0)
      return 1%mod;
    if(dp[n]!=-1)
      return dp[n];
    dp[n]=0;
   for(ll i=1;i<=6;i++)
   {
    dp[n]+=solve(n-i,dp)%mod;
   }
   return dp[n]%mod;


}
int main()
{
    ll n;
    cin>>n;
    vector<ll>dp(n+1,-1);
   ll ans= solve(n,dp)%mod;
   cout<<ans%mod<<"\n";
    return 0;
}