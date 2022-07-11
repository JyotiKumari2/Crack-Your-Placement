#include<bits/stdc++.h>
using namespace std;
int main()
{
    int*ch=new int[26];
    for(int i=0;i<26;i++)
      cin>>ch[i];
    string s;
    cin>>s;
    int n=s.size();
    
    int maxCount=0;
    for(int i=0;i<n;i++)
    {
          if(ch[s[i]-'a']>maxCount)
              maxCount=ch[s[i]-'a'];
            
    }
    cout<< n*maxCount<<"\n";

    return 0;

}