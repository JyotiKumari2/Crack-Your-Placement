#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,s;
    cin>>m>>s;
     string minimum="";
     string maximum="";
     if(s==0)
     {
        if(m==1)
          cout<<"0 0\n";
          else
          cout<<"-1 -1\n";
        return 0;
     }
     for(int i=0;i<m;i++)
     {
        int maxi = min(9,s);
        maximum.push_back('0'+maxi);
        s-=maxi;
     }
     if(s>0)
       {
        cout<<"-1 -1\n";
        return 0;
       }
       // for minimum
       for(int i=m-1;i>=0;i--)
       {
            minimum.push_back(maximum[i]);

       }
      int j=0;
      while(minimum[j]==0)
          j++;
          minimum[0]++;
          minimum[j]--;
          cout<<minimum<<" "<<maximum<<"\n";

    return 0;
}