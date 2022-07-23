#include<bits/stdc++.h>
using namespace std;
int fibo(int n)
{
    if(n==0 || n==1)
     return n;
     return fibo(n-1)+fibo(n-2);
}
int main()
{
    int n=4;
    int ans=fibo(n);
    cout<<ans<<"\n";
    return 0;
}