#include<bits/stdc++.h>
using namespace std;
int printSUbsequencesK(  vector<int>arr, int n, int i, int sum,int s)
{
     if(i==n)
     {
        if(s==sum)
        {
           return 1;    
        
        }
       
        return 0;
     }
      
     s+=arr[i];
     int l=printSUbsequencesK( arr,n,i+1,sum,s);
     
     s-=arr[i];
     int r=printSUbsequencesK( arr,n,i+1,sum,s);

     return l+r;


}

int main()
{
    cout<<"Enter array size:\n";
    int n;
    cin>>n;
    cout<<"Enter array elements:\n";
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter subsequence sum is equal to:\n";
    int s;
    cin>>s;
    // vector<int>ds;
    cout<<"Count of subsequence whose sum is equal to "<<s<<":"<< printSUbsequencesK( arr,n,0,s,0);
    return 0;
}