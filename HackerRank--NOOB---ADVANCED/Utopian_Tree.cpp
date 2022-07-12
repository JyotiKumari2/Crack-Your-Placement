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
        int h=0;
        for(int i=0;i<=n;i++)
        {
            if(i%2==0)
               h++;
               else
                 h*=2;
        }
        cout<<h<<"\n";
    }
    return 0;
}