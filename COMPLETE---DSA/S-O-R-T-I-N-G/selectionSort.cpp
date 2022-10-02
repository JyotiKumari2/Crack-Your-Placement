#include<bits/stdc++.h>
using namespace std;

void selectionSort(int *arr, int n)
{
    for(int i=0;i<n-1;i++)
      {
        int minIndx=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[minIndx])
              minIndx=j;
        }
        swap(arr[minIndx],arr[i]);
      }
}
int main()
{
    int n;
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++)
         cin>>arr[i];
        
    // Selection Sort : Find the minimum element ...
    // TC: O(N*N)  SC:O(1)

    selectionSort(arr,n);
    cout<<"Sorted Array:\n";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;
}