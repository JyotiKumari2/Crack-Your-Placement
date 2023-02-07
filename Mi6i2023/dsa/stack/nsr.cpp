#include<bits/stdc++.h>
using namespace std;
int main()
{

    // nearest smallest to right
    vector<int>arr={2,3,5,7,1,4,2};
    vector<int>ans;
    stack<int>s;
    for(int i=arr.size()-1;i>=0;i--)
    {
        if(s.size()==0)
           ans.push_back(-1);
        else if(s.size()>0 && s.top()<arr[i])
           ans.push_back(s.top());
        else if(s.size()>0 && s.top()>=arr[i])
        {
            while(s.size()>0 && s.top()>=arr[i])
              s.pop();
            if(s.size()==0)
               ans.push_back(-1);
            else
             ans.push_back(s.top());
        }
        s.push(arr[i]);
    }
    
    reverse(ans.begin(),ans.end());


    //printing answer array
    for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<" ";
}