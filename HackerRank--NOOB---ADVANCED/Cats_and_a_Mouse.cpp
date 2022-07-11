#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
    int a,b,m;
    cin>>a>>b>>m;
    int d1= abs(a-m);
    int d2= abs(b-m);

    if(d1>d2)
       cout<<"Cat B\n";
       else if(d1<d2)
          cout<<"Cat A\n";
             else
                cout<<"Mouse C\n";

    }
    return 0;
}