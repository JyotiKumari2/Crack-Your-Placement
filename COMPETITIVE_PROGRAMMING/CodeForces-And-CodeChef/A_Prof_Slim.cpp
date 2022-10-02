#include<bits/stdc++.h>
using namespace std;
bool checkSorted(int *arr, int n)
{
      for(int i=0;i<n-1;i++)
      {
        if(arr[i]>arr[i+1])
           return false;
      }
      return true;

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int *arr=new int[n];
        int countNeg=0;
        
        for(int i=0;i<n;i++){
           cin>>arr[i];
           if(arr[i]<0)
             countNeg++;
        }

        if(checkSorted(arr,n))
            cout<<"YES\n";
        else
        {
        int countP=0;
        for(int i=0;i<countNeg;i++)
        {  
            if(arr[i]>0)
             countP++;

        }
        int cNeg=0;
        for(int i=countNeg;i<n;i++)
        {
            if(arr[i]<0)
               cNeg++;
        }
        bool flag =true;
        if(countP!=cNeg)
           flag=false;
           else
           {
            for(int i=0;i<countNeg;i++)
            {
                if(arr[i]>0)
                   arr[i]=arr[i]*(-1);
            }
            for(int i=countNeg;i<n;i++)
              {
                if(arr[i]<0)
                  arr[i]=arr[i]*(-1);
              }
           flag = checkSorted(arr,n);
              
           }

           if(flag)
              cout<<"YES\n";
              else
                cout<<"NO\n";
        } 
        
    }
    return 0;
}