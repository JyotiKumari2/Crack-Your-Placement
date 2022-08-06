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
       
        // int b =n;
        
        //  if(n>=3)
        //      b=n/3;

        // int diff = abs(n-3*b);
        // int a=diff;
        // if(diff>=2)
        //      a=diff/2;

        // cout<<a+b<<"\n";

        int rem = n%3;
        if(n==1)
           cout<<2;
           else
        if(n==2)
           cout<<1;
           else{
        if(rem==0)
            cout<<n/3;
            else
              cout<<n/3+1;

              
           }
           cout<<"\n";

           
    }
    return 0;
}