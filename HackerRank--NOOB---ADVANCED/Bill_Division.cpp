#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int *bill =new int[n];
    for(int i=0;i<n;i++)
      cin>>bill[i];

    int b;   // Brian charged from Anna
    cin>>b;

    int sum=0;
    sum=accumulate(bill,bill+n,sum);
    sum=sum-bill[k];

    sum/=2;
    if(sum==b)
      cout<<"Bon Appetit\n";
      else
         cout<<b-sum<<"\n";
    
    return 0;
}