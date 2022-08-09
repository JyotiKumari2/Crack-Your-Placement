#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int *arr=new int[n];
        int odd=0;
        int even=0;

        for(int i=0;i<n;i++)
        {
             cin>>arr[i];
             if(arr[i]%2==0)
               even++;
               else
               odd++;
        }

        if(odd<=even)
           cout<<odd<<"\n";
           else
             cout<<even<<"\n";

        
        delete []arr;
    }
    return 0;
}