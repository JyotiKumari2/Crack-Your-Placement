#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++)
       cin>>arr[i];
    int count=1;
    int c=0;
    int b=0;
    int ba=0;
     
    for(int i=0;i<n;i++)
    {
        if(count==1)
        {
            c+=arr[i];
            count++;
             
        }
            else if(count==2)
              {
                b+=arr[i];
                count++;
                 
              }
              else if(count==3)
              {
                ba+=arr[i];
                count=1;
                 
              }
    }

    if(c>b && c>ba)
        cout<<"chest";
        else if(b>c && b>ba)
           cout<<"biceps";
           else
              cout<<"back";
     
       delete []arr;
    return 0;

}