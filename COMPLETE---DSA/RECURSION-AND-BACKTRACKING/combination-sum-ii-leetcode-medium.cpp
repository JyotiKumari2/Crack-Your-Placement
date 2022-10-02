#include<bits/stdc++.h>
using namespace std;
void findCombinationSum2(int ind, int *c, int t, vector<vector<int>>&ans, vector<int>&ds,int n)
{
       if(t==0)
       {
        ans.push_back(ds);
        return;
       }
       for(int i=ind;i<n;i++)
       {
        if(i>ind && c[i]==c[i-1])
              continue;
            if(c[i]>t)
               break;
               ds.push_back(c[i]);
               findCombinationSum2(i+1,c,t,ans,ds,n);
               ds.pop_back();
       }
}
int main()
{

    int n;
    cin>>n;
    int *c=new int[n];
    for(int i=0;i<n;i++)
       cin>>c[i];
    int t;
    cin>>t;

    vector<vector<int>>ans;
    vector<int>ds;

    findCombinationSum2(0,c,t,ans,ds,n);

    cout<<"Print combination sum2: \n";
    for(int i=0;i<ans.size();i++)
    {
        int m=ans[i].size();
        for(int j=0;j<m;j++)
           cout<<ans[i][j]<<" ";
        cout<<endl;
    }

    return 0;
}