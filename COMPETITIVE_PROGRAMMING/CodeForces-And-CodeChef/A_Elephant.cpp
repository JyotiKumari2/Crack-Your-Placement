#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
    int m1 = (x/1);
    if(x%1)
      m1+=1;
    int m2 = (x/2);
      if(x%2)
        m2+=1;
    int m3 = (x/3);
       if(x%3)
        m3+=1;
    int m4 = (x/4);
      if(x%4)
        m4+=1;
    int m5 =(x/5);
     if(x%5)
       m5+=1;
       vector<int>v={m1,m2,m3,m4,m5};
       sort(v.begin(),v.end());
       cout<<v[0]<<"\n";
    return 0;
}