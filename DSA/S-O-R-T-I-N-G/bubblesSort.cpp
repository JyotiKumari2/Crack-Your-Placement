#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int *arr, int n)
{
    for(int i=0;i<n-1;i++)
       {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
               swap(arr[j],arr[j+1]);
        }
       }
}
int main()
{
    int n;
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++)
       cin>>arr[i];
    // Bubble Sort Algorithm 
    // TC : O(n*n)   SC: O(n)
    bubbleSort(arr,n);

    // After bubble sort :
    cout<<"Sorted Array:\n";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
        
    return 0;
}