#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    string ans="";
    // for(int i=s.size()-1;i>0;)
    // { 
    //       if(s[i]=='.' && s[i-1]=='-')
    //       {
    //          ans+='1';
    //          i=i-2;
    //       }
    //          else if(s[i]=='.' && s[i-1]!='-')
    //          {
    //              ans+='0';
    //              i=i-1;
    //          }
    //              else if(s[i]=='-' && s[i-1]=='-')
    //              {
    //                  ans+='2';
    //                  i=i-2;
    //              }

    // }
    // reverse(ans.begin(),ans.end());

    for(int i=0;i<s.size();)
    {
        if(s[i]=='.')
        {
            ans+='0';
            i+=1;
        }
        else if(s[i]=='-' && s[i+1]=='.')
        {
            ans+='1';
            i=i+2;
        }
        else if(s[i]=='-' && s[i+1]=='-')
        {
            ans+='2';
            i=i+2;
        }

    }
    cout<<ans<<"\n";
    return 0;
}