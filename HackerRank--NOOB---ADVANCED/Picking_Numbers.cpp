#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++)
      cin>>arr[i];

    int maxLength=0;
    int length=0;
    for(int i=0;i<n-1;i++)
    {
        if((arr[i+1]-arr[i])<=1 )
        {
           length++;
           maxLength=max(maxLength,length);
        }
        else{
                
                length=0;    
        }
    }
    cout<<maxLength<<"\n";
    return 0;
}
