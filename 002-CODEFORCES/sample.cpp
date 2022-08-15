#include<bits/stdc++.h>
using namespace std;
int minCount(string &s)
{
       
    unordered_map<char,int>mp;
    for(int i=0;i<s.size();i++)
    {
        mp[s[i]]++;
    }
    set<char>a;

    for(int i=0;i<s.length();i++)
        a.insert(s[i]);
    int count=1;
    int ans=0;
   for(auto i:a)
   {


    if(count%9==0)
        count++;
    ans+= (count*mp[i]);
   }
    
     return ans;  
}
int main()
{
    string s ;
    cin>> s;
    int ans=minCount(s);
    cout<<ans<<"\n";
    return 0;
}


 