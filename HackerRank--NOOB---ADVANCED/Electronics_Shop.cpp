#include<bits/stdc++.h>
using namespace std;


int maxP(int b, int *keyBoards, int *drives, int n, int m)
{



    int maxPrice=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(keyBoards[i]+drives[j]>b && maxPrice==0)
                 return -1;

            if(keyBoards[i]+drives[j]>maxPrice    && keyBoards[i]+drives[j] <=b)
                maxPrice = keyBoards[i]+drives[j];
            
        }
    }
    return maxPrice;
}
int main()
{

    int b,n,m;
    cin>>b>>n>>m;
    int *keyBoards=new int[n];
    for(int i=0;i<n;i++)
        cin>>keyBoards[i];
    int *drives=new int[m];
    for(int i=0;i<m;i++)
        cin>>drives[i];
    
    sort(keyBoards,keyBoards+n);
    sort(drives,drives+m);
    
    int ans=maxP(b,keyBoards,drives,n,m);
    cout<<ans<<"\n";
    delete []keyBoards;
    delete []drives;
    return 0;
}