#include<bits/stdc++.h>
using namespace std;
void solve(int count, int n)
{
    if(count>n)
       return;
      cout<<count<<"\n";
      solve(count+1,n);
}
int main()
{
    int count =1, n=5;
    solve(count,n);
    return 0;
}