#include<bits/stdc++.h>
using namespace std;
int getWays(int *coins, int value, int n)
{
    int dp[value+1][n+1];
    for(int i=0;i<=n;i++)
       dp[0][i]=1;
    for(int i=1;i<=value;i++)
       dp[i][0]=0;
    for(int i=1;i<=value;i++)
    {
        for(int j=1;j<=n;j++)
        {
            dp[i][j]=dp[i][j-1];
            if(coins[j-1]<=i)
              dp[i][j]+=dp[i-coins[j-1]][j];
        }

    }
    return dp[value][n];
}
int main()
{

    // n : sum of coins
    // m : number of coins
    int n,m;
    cin>>n>>m;

    int *coins= new int[m];
    for(int i=0;i<m;i++)
        cin>>coins[i];
    int noOfWays = getWays(coins,n,m);
    cout<<noOfWays<<"\n";

    return 0;
}