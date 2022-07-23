#include<bits/stdc++.h>
using namespace std;

void solve(int i,int n)
{
    if(i>n)
       return;
    solve(i+1,n);
    cout<<i<<"\n";
}
int main()
{
     int n=5;
     solve(1,n);
    return 0;
}