#include<bits/stdc++.h>
using namespace std;
void solve(int n)
{
    if(n==0)
      return;
    cout<<n<<"\n";
    solve(n-1);         //tail recursion
}
int main()
{
    int n=5;
    solve(n);
    return 0;
}