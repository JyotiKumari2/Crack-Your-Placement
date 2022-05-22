#include<bits/stdc++.h>
using namespace std;
      void printArrayRecursively(int arr[],int n)
    {
       //Your code here
       //Use recursion to print array elements from start to end
       if(n<=0);
       return;
       cout<<arr[0];
       printArrayRecursively(arr+1,n-1);
    }
int main()
{
    int n=5;
    int *arr=new int[n];
    for(int i=0;i<n;i++)
       cin>>arr[i];
       printArrayRecursively(arr,n);
    return 0;
}