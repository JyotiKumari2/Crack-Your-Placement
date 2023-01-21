#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int cnt=0;
  string s="";
  while(n!=0)
  {
      int rem = n%10;
      if(rem==0)
      {
        cnt++;
         
      }
      else
      s+=('a'+(rem-1));

    n=n/10;
  }
  
  reverse(s.begin(),s.end());
  for(int i=0;i<cnt;i++)
   s+='0';
  cout<<s<<"\n";
  return 0;
}