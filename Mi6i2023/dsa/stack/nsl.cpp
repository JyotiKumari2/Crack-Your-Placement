#include<bits/stdc++.h>
using namespace std;
int main()
{
    // Nearest smaller to left
    vector<int>arr={2,3,5,7,1,4,2};
    stack<int>s;
    vector<int>ans;
    for(int i=0;i<arr.size();i++)
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

    //printing answer array
    for(int i=0;i<ans.size();i++)
       cout<<ans[i]<<" ";
    return 0;
}