#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int count=0;
     int *a=new int[n];
    int s=0;
    for(int i=0;i<n;i++)
      {
        cin>>a[i];
        s+=a[i];
      }

      if(s==0)
         cout<<0<<"\n";
         else{
            for(int i=0;i<n;i++)
            {
                if(a[i]>=a[k-1])
                    count++;
            }
               cout<<count<<"\n";
         }
        
        
    return 0;
}