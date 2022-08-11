#include<bits/stdc++.h>
using namespace std;
// bool coPrime(int a, int b)
// {
//     return (__gcd(a,b)==1);
// }
int main()
{
    long long int l,r;
    cin>>l>>r;
     if(l%2!=0)
       l++;
       if(l+2>r)
           cout<<-1<<"\n";
           else
           {
            cout<<l<<" "<<l+1<<" "<<l+2<<"\n";
           }
    return 0;
}