#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,x,y;
        cin>>a>>b>>c>>x>>y;
        bool flag =true;
        if( (x>a && y>b)   && (((x-a)+(y-b)) > c) )
             flag = false;
             else if(x>a  && (x-a)>c)
                 flag = false;
                 else if(y>b && (y-b)>c)
                     flag=false;
            if(flag)
               cout<<"YES\n";
               else
                 cout<<"NO\n";
           
    }
    return 0;
}