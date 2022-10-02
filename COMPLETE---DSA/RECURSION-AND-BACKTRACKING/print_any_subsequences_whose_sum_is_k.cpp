// Causing some error need to look into it

#include<bits/stdc++.h>
using namespace std;
bool printSUbsequencesK(vector<int>&ds, vector<int>arr, int n, int i, int sum,int s)
{
     if(i==n)
     {
        if(s==sum)
        {
            for(auto it:ds)
               cout<<it<<" ";
           cout<<"\n";
           return true;
        }
       else
        return false;
     }
     ds.push_back(arr[i]);
     s+=arr[i];
    if( printSUbsequencesK(ds,arr,n,i+1,sum,s)==true);
       return true;
     ds.pop_back();
     s-=arr[i];
    if( printSUbsequencesK(ds,arr,n,i+1,sum,s)==true);
        return true;
    return false;


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