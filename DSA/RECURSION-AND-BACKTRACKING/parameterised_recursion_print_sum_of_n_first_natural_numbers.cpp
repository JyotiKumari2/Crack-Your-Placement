#include<bits/stdc++.h>
using namespace std;

// Parameterised Recursion
void solve(int i, int s)
{
      if(i<1)
        {
            cout<<s<<"\n";
            return;
        }
        solve(i-1,s+i);
}
int main()
{
    int n=5;
    solve(n,0);
    return 0;
}