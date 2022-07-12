#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int *arr=new int [n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        int check=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]<=0)
              check++;
        }
        if(check<k)
           cout<<"YES\n";
           else
             cout<<"NO\n";
    }
    return 0;
}