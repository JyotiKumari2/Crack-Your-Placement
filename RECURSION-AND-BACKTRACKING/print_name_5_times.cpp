#include<bits/stdc++.h>
using namespace std;
void solve(int count)
{
    if(count>=5)
       return ;
    cout<<"Jyoti \n";
    solve(count+1);
}
int main()
{
    int count=0;
    solve(count);
    return 0;
} 