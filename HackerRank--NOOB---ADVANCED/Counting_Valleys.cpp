#include<bits/stdc++.h>
using namespace std;
int countValleys(const string &s, int n)
{
    int u=0;
    int d=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='U')
        {
            if(u==-1)
                d++;
            u++;
        }
        else
           u--;
           
    }
    return d;
}
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int ans=countValleys(s,n);
    cout<<ans<<"\n";
    return 0;
}