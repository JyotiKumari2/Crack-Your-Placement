#include<bits/stdc++.h>
using namespace std;
void printSUbsequencesK(vector<int>&ds, vector<int>arr, int n, int i, int sum,int s)
{
     if(i==n)
     {
        if(s==sum)
        {
            for(auto it:ds)
               cout<<it<<" ";
           cout<<"\n";
        }
       
        return;
     }
     ds.push_back(arr[i]);
     s+=arr[i];
     printSUbsequencesK(ds,arr,n,i+1,sum,s);
     ds.pop_back();
     s-=arr[i];
     printSUbsequencesK(ds,arr,n,i+1,sum,s);


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
    vector<int>ds;
    printSUbsequencesK(ds,arr,n,0,s,0);
    return 0;
}