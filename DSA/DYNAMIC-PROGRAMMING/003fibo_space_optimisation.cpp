#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    int n;
    cin>>n;
    int prev=0;
    int prev1=1;
    for(int i=2;i<=n;i++)
    {
    int temp=prev+prev1;
    prev=prev1;
    prev1=temp;
    }
    cout<<prev1<<"\n";

    return 0;

}