#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;   //size of wheels
        cin>>n;
        int *wheels=new int[n];   //numbers on wheels
        for(int i=0;i<n;i++)
            wheels[i];

        int i=0;
        vector<int>ans;
        int temp=n;
        while(temp--)
        {
            int count=0;
            int b;
            string s;
            cin>>b>>s;
           
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<b;j++)
                {
                    if(wheels[i]==9 && s[j]=='D')
                    
                    
                }
            }

        }
        for(int i=0;i<ans.size();i++)
           cout<<ans[i]<<" ";
        cout<<"\n";
    }
    return 0;
}