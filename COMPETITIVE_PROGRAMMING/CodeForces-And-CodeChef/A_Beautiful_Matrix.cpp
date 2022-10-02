#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>>matrix(5,vector<int>(5,0));
    int m=0;
    int n=0;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
           cin>>matrix[i][j];
           if(matrix[i][j]==1)
              {
                m=i;
                n=j;
              }

    }
    }

    cout<<abs(m-2)+abs(n-2)<<"\n";

    return 0;
}