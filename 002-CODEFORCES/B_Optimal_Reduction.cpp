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

        int prefixCount=1;
        int suffixCount=1;
         
        for(int i=0;i<n;i++)
        {
            if(arr[i]<=arr[i+1])
            {
                prefixCount++;
            }
            else
              break;
        }

        // for(int i=0;i<n;i++)
        // {
        //     if(arr[n-i+1]<arr[n-i-2])
        //        break;
        //        else
        //        suffixCount++;
        // }

        for(int i=n-1;i>=1;i--)
        {
            if(arr[i]<=arr[i-1])
               break;
               else
               suffixCount++;
        }
        
      if(prefixCount+suffixCount>=n)
           cout<<"YES\n";
           else
             cout<<"NO\n";
    }
    return 0;
}