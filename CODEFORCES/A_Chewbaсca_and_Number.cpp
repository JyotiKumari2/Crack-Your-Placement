#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int first = s[0]-'0';
    if(first==9)
       {
        s[0]='9';
       }
       else
       {
        if(first>4)
          s[0]=((9-first)+'0');
       }
       for(int i=1;i<s.size();i++)
       {
        int num = s[i]-'0';
        if(num>4)
          s[i] = ((9-num)+'0');
       }

       cout<<s<<"\n";
    return 0;
}
