#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int *arr=new int[n];
        for(int i=0;i<n;i++)
           cin>>arr[i];
        string s(m,'B');
        vector<int>visited(m+1,0);


        for(int i=0;i<n;i++)
        {
            int minimum = min(arr[i],(m+1-arr[i]));
            int maximum = max(arr[i],(m+1-arr[i]));
            if(!visited[minimum])
            {
                s[minimum-1]='A';
                visited[minimum]=1;
            }
            else {
                if(!visited[maximum])
                {
                    s[maximum-1]='A';
                    visited[maximum]=1;
                }
            }
        }
        cout<<s<<"\n";

        delete []arr;
    }
    return 0;
}