#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    set<char>c;
    for(auto i:s)
       c.insert(i);
    if(c.size()%2==0)
        cout<<"CHAT WITH HER!\n";
        else
         cout<<"IGNORE HIM!\n";
    return 0;
}