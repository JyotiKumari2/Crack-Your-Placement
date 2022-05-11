#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        bool isDominant=false;
        if(a>b+c)
          isDominant=true;
          else
           if(b>a+c)
            isDominant=true;
            else if(c>a+b)
             isDominant=true;
        if(isDominant)
           cout<<"YES\n";
           else
            cout<<"NO\n";
           
     }
    return 0;
}