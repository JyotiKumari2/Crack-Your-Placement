#include<bits/stdc++.h>
using namespace std;
#define ll long long int
 

int main()
{
    int t;
    cin>>t;
    vector<ll>factorial(1001,1);
    ll mod = 998244353;
   
   for(int i=1;i<=1000;i++)
   {
      
      factorial[i]=((factorial[i-1]*i)%mod);

   }
    while(t--)
    {
        int n;
        cin>>n;
        if(n%2)
          cout<<0<<"\n";
          else{
            cout<<(factorial[n/2]*factorial[n/2])%mod<<"\n";
          }

    }
    return 0;
}