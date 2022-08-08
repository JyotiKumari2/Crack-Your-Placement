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
        if(n%2==0)
           cout<<"0 0 "<<n/2<<"\n";
           else
              cout<<-1<<"\n";
    }
    return 0;
}