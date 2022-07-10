#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int n=s.size();
        int count=1;
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]!=s[i+1])
                count++;
            if(count==3)
            {
                ans++;
                count=1;
                i++;
            }
        }
    }
}