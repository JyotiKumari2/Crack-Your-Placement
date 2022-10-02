#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{

     
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,c,d;
        cin>>a>>b>>c>>d;
        ll g1= __gcd(a,b);
        ll g2=__gcd(c,d);
        a/=g1;
        b/=g1;
        c/=g2;
        d/=g2;
        if(a==c && b==d)
          cout<<0<<"\n";
          else if(a==0 || c==0)
             cout<<1<<"\n";
             else if((a*d)%(b*c)==0)
                       cout<<1<<"\n";
                       else if((b*c)%(a*d)==0)
                             cout<<1<<"\n";
                             else
                               cout<<2<<"\n";
    }
    return 0;

}