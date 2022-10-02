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
        int *arr=new int[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        sort(arr,arr+n);
        int count0=0;
        int countSame=0;
        for(int i=0;i<n;i++)
        {
             if(arr[i]==0)
                 count0++;
        }
        for(int i=0;i<n-1;i++)
        {
            if(arr[i]==arr[i+1])
               {
                countSame=1;
                break;
               }
        }
        if(count0!=0)
           cout<<n-count0<<"\n";
           else if(countSame!=0)
               cout<<n<<"\n";
               else
                   cout<<n+1<<"\n";
        delete []arr;
    }
    return 0;
}