#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int x=0;
    while(n--)
    {
          string s;
          cin>>s;
          for(int i=0;i<3;i++)
          {
           if(s[i]=='X')
              continue;
              else if(s[i]=='+')
              {
                  x++;
                  i+=2;
              }
                  else
                  {
                  x--;
                  i+=2;
                  }
          }

    }
    cout<<x<<"\n";
    return 0;
}