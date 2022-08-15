#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int count=0;
    while(n--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int s=a+b+c;
        if(s>=2)
          count++;
    }
    cout<<count<<"\n";
    return 0;
}