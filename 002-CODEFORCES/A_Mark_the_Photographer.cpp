#include<bits/stdc++.h>
using namespace std;
 int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int *arr = new int[2*n];

        for(int i=0;i<2*n;i++)
            cin>>arr[i];
        sort(arr,arr+2*n);
        bool flag =true;
        for(int i=0;i<n;i++)
        {
            
                
           if(abs(arr[i]-arr[i+n])<x )
           {
            flag=false;
            break;
           }

        }
           if(flag)
              cout<<"YES\n";
              else
                 cout<<"NO\n";
        
        delete []arr;

    }
    return 0;
 }