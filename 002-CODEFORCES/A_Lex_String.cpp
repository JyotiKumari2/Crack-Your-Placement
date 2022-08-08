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
        string a ;
        cin>>a;
        string b ;
        cin>>b;
        string s="";
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        int i=0;
        int j=0;
        // int m=0;
        int temp=k;
        while(  && !b.empty())
        {
               if(a[i]<=b[j] && k!=0)
               {
                s+=a[i];
                i++;
                if(a[i]==a[i+1])
                k--;
                
               }
               
               else if(k!=0)
               {
                s+=b[j];
                j++;
                if(b[j]==b[j+1])
                   k--;

                
               }

               
        }
    }
    return 0;

}