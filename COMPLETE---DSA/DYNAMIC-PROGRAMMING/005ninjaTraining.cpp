#include<bits/stdc++.h>
using namespace std;
int solve(int day, int last, vector<vector<int>>&points, vector<vector<int>>&dp)
{
    if(day==0)
    {
        int maximum=0;
        for(int task=0;task<3;task++)
        {
            if(task!=last)
               maximum=max(maximum,points[0][task]);
        }
        return maximum;
    }
    if(dp[day][last]!=-1)
        return dp[day][last];

    int maximum=0;
    for(int task=0;task<3;task++)
    {
        if(task!=last)
        {
            int point = points[day][last]+solve(day-1,task,points,dp);
            maximum=max(maximum,point);
        }

    }
    return dp[day][last]=maximum;
}
int ninjaTraining(int n, vector<vector<int>>&points)
{
    vector<vector<int>>dp(n,vector<int>(4,-1));
    return solve(n-1,3,points,dp);

}
int main()
{
    int n;
    cin>>n; // No of days
    vector<vector<int>>points(n,vector<int>(3));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<3;j++)
            cin>>points[i][j];
    }

    int ans=ninjaTraining(n,points);
    cout<<ans<<"\n";
    return 0;
}