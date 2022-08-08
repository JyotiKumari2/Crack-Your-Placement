#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        vector<vector<int>>matrix(2,vector<int>(2,0));
        for(int i=0;i<2;i++)
        {
            for(int j=0;j<2;j++)
            {
                cin>>matrix[i][j];
            }
        }

        int count0 =0;
        int count1 =0;
        for(int i=0;i<2;i++)
        {
            for(int j=0;j<2;j++)
            {
                if(matrix[i][j]==0)
                   count0++;
                   else
                    count1++;
            }
        }
        if(count1==0)
            cout<<0<<"\n";
            else if(count1==4)
                     cout<<2<<"\n";
            else if(count0<=3 || count1<=3)
                  cout<<1<<"\n";
                  
    }
    return 0;
}