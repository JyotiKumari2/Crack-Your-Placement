#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;
       int *arr=new int[3];
       for(int i=0;i<3;i++)
           cin>>arr[i];
        int count=0;
        while(count<4 && (x-1)>=0)
        {
           int temp=x;
           x = arr[x-1];
           arr[temp-1]=-1;
           
           count++;

        }
        bool flag = true;
        for(int i=0;i<3;i++)
        {
            if(arr[i]>0)
                 {
                    flag=false;
                    break;
                 }
        }
        if(flag)
           cout<<"YES\n";
           else
             cout<<"NO\n";

    }
    return 0;
}