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
        vector<int>v(n);
        // set<int>s;
        map<int,int>m;
        for(int i=0;i<n;i++)
        {
           cin>>v[i];
        //    s.insert(v[i]);
           m[v[i]]++;

        }
        // if(s.size()==n)
        //    cout<<n<<"\n";
        //    else
        //      cout<<s.size()+1<<"\n";
        int ans=0;
        for(auto i:m)
        {
            if(i.first==1)
            {
                if(i.second%2==0)
                   ans+=(i.second/2);
                else
                {
                    ans+=(i.second/2);
                    ans++;
                }

            }
            else
            {
                ans+=(i.second);
            }
        }

        cout<<ans<<"\n";


        
    }
    return 0;

}