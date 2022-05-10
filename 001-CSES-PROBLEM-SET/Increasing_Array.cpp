#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n;
    cin>>n;
    ll *arr=new ll[n];
    for(int i=0;i<n;i++)
     cin>>arr[i];
     ll sum=0;
     for(int i=0;i<n-1;i++)
     {
         if(arr[i+1]<arr[i])
         {
             sum+=abs(arr[i]-arr[i+1]);
             arr[i+1]=arr[i];
         }

     }
     cout<<sum;
    return 0;
}