#include<bits/stdc++.h>
using namespace std;

void printSubsequence(int i , vector<int>&ds, vector<int>arr, int n)
{
    if(i==n)
    {
        for(auto it:ds)
         cout<<it<<" ";
        cout<<"\n";
        return ;

    }
    ds.push_back(arr[i]);
    printSubsequence(i+1,ds,arr,n);
    ds.pop_back();
    printSubsequence(i+1,ds,arr,n);

}
int main()
{
    cout<<"Enter size of array:\n";
    int n;
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter array elements:\n";
    for(int i=0;i<n;i++)
      cin>>arr[i];
    vector<int>ds;
    cout<<"Print all the subsequences:\n";
    printSubsequence(0,ds,arr,n);

    return 0;
}