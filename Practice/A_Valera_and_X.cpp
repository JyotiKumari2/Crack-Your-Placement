#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<vector<int>>matrix(n,vector<int>(n,-1));
    for(int i=0;i<n;i++)
       {
        for(int j=0;j<n;j++)
        {
            cin>>matrix[i][j];
        }
       }
       int check=matrix[0][0];
        bool flag=true;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if((i==j || (i+j)==n-1) && (matrix[i][j]!=check))
                {
                    flag=false;
                    break;
                }
                if((i!=j && (i+j)!=n-1) && (matrix[i][j]==check))
                   {
                    flag=false;
                    break;
                   }
                  
            }
        }
        if(flag)
           cout<<"YES\n";
           else
             cout<<"NO\n";
    return 0;
}