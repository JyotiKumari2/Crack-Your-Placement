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
        int*a=new int[n];
        for(int i=0;i<n;i++)
          cin>>a[i];
        int m;
        cin>>m;
        int*b=new int[m];
        for(int i=0;i<m;i++)
        cin>>b[i];

        sort(a,a+n);
        sort(b,b+m);

        if(a[n-1]==b[m-1])
        {
           cout<<"Alice \n";
           cout<<"Bob\n";
        }
        else if(a[n-1]>b[m-1])
        {
            cout<<"Alice\n";
            cout<<"Alice\n";
        }
        else if(a[n-1]<b[m-1])
            {
                cout<<"Bob\n";
                cout<<"Bob\n";
            }
      
    }
}