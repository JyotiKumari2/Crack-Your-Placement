#include<bits/stdc++.h>
using namespace std;
int main()
{
    // Stock span problem : consecutive smaller and equal to
    vector<int>arr={100,80,60,70,60,75,85};
    vector<int>nglIdx;
    stack<pair<int,int>>s;
    for(int i=0;i<arr.size();i++)
    {
        if(s.size()==0)
           nglIdx.push_back(-1);
        else if(s.size()>0 && s.top().first>arr[i])
              nglIdx.push_back(s.top().second);
        else if(s.size()>0 && s.top().first<=arr[i])
              {
                while(s.size()>0 && s.top().first<=arr[i])
                    s.pop();
                if(s.size()==0)
                   nglIdx.push_back(-1);
                   else
                     nglIdx.push_back(s.top().second);
                 
              }

              s.push({arr[i],i});
    }

    // printing answer array
    for(int i=0;i<nglIdx.size();i++)
       cout<<(i-nglIdx[i])<<" ";
    return 0;
}