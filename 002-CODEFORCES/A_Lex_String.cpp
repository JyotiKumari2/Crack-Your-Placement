#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,k;
        cin>>n>>m>>k;
        string a ;
        cin>>a;
        string b ;
        cin>>b;
        string s="";
        sort(a.begin(),a.end(),greater<char>());
        sort(b.begin(),b.end(),greater<char>());
        int acount=0;
        int bcount=0;
        bool flag;
        while(!a.empty() && !b.empty())
        {

            flag = a.back()<b.back();
            if(flag && acount==k) flag = false;
            if(!flag && bcount==k ) flag = true;
            if(flag) {
                     s.push_back(a.back());
                     acount++;
                     bcount=0;
                     a.pop_back();

            }
            else{
                s.push_back(b.back());
                     bcount++;
                     acount=0;
                     b.pop_back();
            }


        }
         
        cout<<s<<"\n";       
        
    }
    return 0;

}