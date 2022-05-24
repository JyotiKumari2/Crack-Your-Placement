#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {


        // Brute force approach giving TLE
        
        int n;
        cin>>n;
        int *a=new int[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        int m;
        cin>>m;
        int *b=new int[m];
         
          for(int i=0;i<m;i++)
          {
             cin>>b[i];
             
          }

         for(int i=0;i<m;i++)
         {
             rotate(a,a+b[i],a+n);
         }
         cout<<a[0]<<"\n";
            
        
    }

    return 0;
}