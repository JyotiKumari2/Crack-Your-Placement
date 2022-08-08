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
        int moves=0;
        int maxpy=0;
        int maxny=0;
        int maxpx=0;
        int maxnx=0;
        for(int i=0;i<n;i++)
        {
            int x,y;
            cin>>x>>y;
            if(y==0)
            {
                if(x<0)
                   maxnx=max(abs(x),maxnx);
                   else
                      maxpx=max(x,maxpx);
            }
            else
            {
                if(y<0)
                maxny=max(abs(y),maxny);
                else
                  maxpy=max(y,maxpy);
            }

        } 
        moves = maxpx*2 + maxnx*2 + maxpy*2 + maxny*2;
        cout<<moves<<"\n";
    }
    return 0;
}