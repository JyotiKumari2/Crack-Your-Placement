#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n%2 && n==3)
          cout<<"NO\n";
          else if(n%2==0)
          {
            cout<<"YES\n";
            for(int i=0;i<n;i++)
               {
                   if(i%2)
                     cout<<-1<<" ";
                     else
                       cout<<1<<" ";
               }
               cout<<"\n";
          }
          else if(n%2 && n!=3)
          {
            int k = (n-1)/2;
            int a = k-1;
            int b = -1*k;
            cout<<"YES\n";
            for(int i=0;i<n;i++)
             {
              if(i%2==0)
                cout<<a<<" ";
                else
                   cout<<b<<" ";
             }
             cout<<"\n";
          }
    }
    return 0;
}