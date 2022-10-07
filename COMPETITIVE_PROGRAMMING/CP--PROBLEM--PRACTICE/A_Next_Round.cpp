#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int count=0;
     int *arr=new int[n];
    // int s=0;
    for(int i=0;i<n;i++)
      {
        cin>>arr[i];
        // s+=a[i];
      }



 
   
    
    for(int i=0;i<n;i++){
        if(arr[i]>=arr[k-1] && arr[i]!=0)count++;
    }
    cout<<count;
return 0;
}
 