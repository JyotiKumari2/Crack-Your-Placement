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
        if(a==0 && b==0 && c==0 && d==0)
         {
            cout<<0<<"\n";
            continue;
         }
         if(a==0 && (b!=0 || c!=0))
         {
            cout<<1<<"\n";
            continue;
         }
        if(a==0 && b==0 && c==0 && d!=0)
        {
            cout<<1<<"\n";
            continue;
        }
        ll A = (a+b);
        ll B = (a+c);
        ll likes=0;
        
        if(A<=B)
          likes=A;
          else
          likes=B;
        int ans=0;
        ll diff1 = A-likes-a;
        ll diff2 = B-likes-a;
        if(d>likes)
          ans=(likes+(d-likes));
        else{
            int left =  (likes-d);
            ans = likes + d;
            if(diff1>=(left+1) || diff2>=(left+1))
            ans+=(left+1);
            else if(diff1>=(left) || diff2>=(left))
              ans+=(left);


        }
        cout<<ans<<"\n";
    }
    return 0;
}