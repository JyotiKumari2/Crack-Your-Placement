// Using Two variables

// #include<bits/stdc++.h>
// using namespace std;
// void reverse(int *arr,int l, int r)
// {
//      if(l>=r)
//         return;
//     swap(arr[l],arr[r]);
//     reverse(arr,l+1,r-1);
// }
// int main()
// {
//     int *arr=new int[5];
//     cout<<"Input 5 array elements:\n";
//     for(int i=0;i<5;i++)
//          cin>>arr[i];
//     reverse(arr,0,4);
//     cout<<"Array element after reverse:\n";
//     for(int i=0;i<5;i++)
//       cout<<arr[i]<<"\n";
//     delete []arr;
// }


// Using single variable

#include<bits/stdc++.h>
using namespace std;

void solve(int *arr, int i )
{
    int n=5;
    if(i>n/2)
       return ;
    swap(arr[i],arr[n-i-1]);
    solve(arr,i+1);
}
int main()
{

    int *arr=new int[5];
    cout<<"Input 5 array elements:\n";
    for(int i=0;i<5;i++)
      cin>>arr[i];
    solve(arr,0);
    cout<<"Array elements after reverse:\n";
    for(int i=0;i<5;i++)
      cout<<arr[i]<<"\n";
    delete []arr;
    return 0;

}