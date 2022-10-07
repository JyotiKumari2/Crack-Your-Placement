#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int s;
        cin>>s;
        int num=9;
        vector<int>res;
        while(s!=0)
        {
                 if(s-num>0)
                 {
                  res.push_back(num);
                  s=s-num;
                  num--;
                 }
                 else
                 {
                    res.push_back(s);
                    s=0;
                 }
        }
        int ans=0;
        for(int i=res.size()-1;i>=0;i--)
        {
               ans =(ans*10)+res[i];
        }
        cout<<ans<<"\n";
    }
    return 0;
}