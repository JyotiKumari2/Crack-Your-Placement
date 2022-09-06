#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        string s(a+b, '0');
        int i=0;
        while(a && b)
        {
            s[i+1]='1';
            i+=2;
            a--;
            b--;

        }
        if(b!=0)
        {
            while(b--)
            {
                s[i]='1';
                i++;
            }
        }
        cout<<s<<"\n";
    }
    return 0;
}