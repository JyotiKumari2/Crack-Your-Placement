#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int l=0,u=0;
    for(auto i:s)
    {
      if(i>='A' && i<='Z')
          u++;
          else
            l++;
    }
    if(l<u)
     transform(s.begin(),s.end(),s.begin(), ::toupper);
    else
    transform(s.begin(),s.end(),s.begin(),::tolower);

    cout<<s<<"\n";
    return 0;
}