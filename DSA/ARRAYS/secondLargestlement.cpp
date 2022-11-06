#include<bits/stdc++.h>
using namespace std;

// function for ffinding second largest element in an array
// Efficient Solution i.e: O(n) in one traversal of array using two variables
int getSLargest(int *arr, int n)
{

     int sL=-1;
     int L=0;
     for(int i=1;i<n;i++)
     {
        if(arr[i]>arr[L])
        {
            sL=L;
            L=i;
        }
        else if(arr[i]!=arr[L])
        {
            if(sL==-1 || arr[i]>arr[sL])
                 sL=i;
        }
     }
     return arr[sL];
}
int main()
{
    int n;
    cin>>n; // size of array
    int *arr = new int[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int secondLargestElement = getSLargest(arr,n);
    cout<<secondLargestElement<<"\n";
}