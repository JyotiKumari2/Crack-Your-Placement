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
      int rem= n%3;
      if(n==1)
         cout<<2<<"\n";
   
     else   if(rem==0)
         cout<<n/3<<"\n";
         else
            cout<<(n/3)+1<<"\n";
   }
   return 0;
}