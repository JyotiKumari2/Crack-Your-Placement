#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr={3,0,0,2,0,4};  // given array
    int n=arr.size();
    vector<int>mxl(n);
    vector<int>mxr(n);

    mxl[0]=arr[0];
    for(int i=1;i<n;i++)
    {
        mxl[i]=max(mxl[i-1],arr[i]);

    }

    mxr[n-1]=arr[n-1];
    for(int i=n-2;i>=0;i--)
      {
        mxr[i]=max(mxr[i+1],arr[i]);
      }

    
    vector<int>water(n);
    for(int i=0;i<n;i++)
    {
        water[i] = min(mxr[i],mxl[i])-arr[i];

    }

    int s=0;
    for(int i=0;i<n;i++)
      s+=water[i];
    cout<<"Maximum water stored:"<<s;

    return 0;
}