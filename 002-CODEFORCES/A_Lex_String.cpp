#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,k;
        cin>>n>>m>>k;
        string a(n);
        cin>>a;
        string b(m);
        cin>>b;
        string c="";
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        int i=0;
        int j=0;
        int t=k;
        while(a.size() && b.size())
        {
           if(a[i]<=b[j] && t!=0) 
           {
               c+=a[i++];
               t--;
               if(t==0)
               { 
                

               }
               
           }
        }
    }
    return 0;
}