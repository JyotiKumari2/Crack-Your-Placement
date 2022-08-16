#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        ll n,k;
        cin>>n>>k;

        bool check=true;
        vector<pair<int,int>>v;
        for(int i=1;i<n;i+=2)
        {
            if(((i+k)*(i+1))%4 !=0    &&   (((i+1)+k)*i)%4!=0)
                {
                    check=false;
                    break;

                }
                else{
                    if( ((i+k)*(i+1))%4 ==0 )
                          v.push_back({i,i+1});
                          else
                          v.push_back({i+1,i});
                }
        }

        if(!check)
           cout<<"NO\n";
           else
              {
                cout<<"YES\n";
                for(auto i:v)
                  cout<<i.first<<" "<<i.second<<"\n";
              }
      
    }
    return 0;
}

// {
//     int n=4;
//      int i=1;
//      while(i<n)
//      {
//         cout<<i<<" "<<i+1<<"\n";
//         i+=2;
//      }
//     return 0;
// }