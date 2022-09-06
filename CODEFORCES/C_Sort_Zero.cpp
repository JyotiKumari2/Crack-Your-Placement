#include<bits/stdc++.h>
using namespace std;
bool sorted(vector<int>&a, int n)
{
    for(int i=0;i<n-1;i++)
    {
        if(a[i]>a[i+1])
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
        int temp=n-1;
        vector<int>a(n);
         
        for(int i=0;i<n;i++)
            cin>>a[i];

        if(sorted(a,n))
           cout<<0<<"\n";
           else{

            

        for(int i=temp;i>=0;i--)
        {
            if(a[i]!=a[i-1])
                break;
                else
                  temp--;
                
              
        }

        set<int>s;
        for(int i=0;i<temp;i++)
        s.insert(a[i]);
        cout<<s.size()<<"\n";
           }
        
    }
    return 0;
}