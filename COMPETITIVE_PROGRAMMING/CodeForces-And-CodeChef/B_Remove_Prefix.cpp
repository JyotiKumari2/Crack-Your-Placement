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
        for(int i=0;i<n;i++)
         cin>>arr[i];

        unordered_map<int,int>m;

        int ind=0;
        bool flag=false;
        for(int i=n-1;i>=0;i--)
        {
            m[arr[i]]++;
            if(m[arr[i]]>1)
            {  
                if(i==0)
                   flag=true;
                ind=i;
                break;
            }
              
        }
        if(ind!=0)
        cout<<ind+1<<"\n";
        else if(ind==0 && flag==true)
              cout<<ind+1<<"\n";
        else
         cout<<ind<<"\n";
        
       
    }
}