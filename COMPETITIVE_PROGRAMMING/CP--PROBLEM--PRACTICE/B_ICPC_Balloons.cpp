#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int *ch=new int[26];
        for(int i=0;i<26;i++)
           ch[i]=0;
        for(int i=0;i<n;i++)
        {
            ch[s[i]-'A']++;
        }
        int count=0;
        for(int i=0;i<26;i++)
        {
            if(ch[i]!=0)
                count+=ch[i]+1;

        }
        cout<<count<<"\n";
    }
    return 0;
}