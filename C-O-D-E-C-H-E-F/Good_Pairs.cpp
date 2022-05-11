//Question 03 Good pairs
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
     ll n;
     cin>>n;
     ll *a=new ll[n];
     ll *b=new ll[n];
     for(ll i=0;i<n;i++)
        cin>>a[i];
    for(ll i=0;i<n;i++)
       cin>>b[i];

       int goodPairs=0;
       int i=0;
       while(i<n)
       {
           for(int j=i+1;j<n;j++)
           {
               if(a[i]==b[j])
                   goodPairs++;
           }
           i++;
        }
        cout<<goodPairs<<"\n";
        delete []a;
        delete []b;
       
    }
    return 0;
}