#include<bits/stdc++.h>
using namespace std;
void permuteArray(vector<int>&v, int i)
{
       swap(v[i-1],v[i]);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            v[i]=i+1;
        }
        int temp=n-1;
        cout<<n<<"\n";
        for(int i=0;i<n;i++)
           cout<<v[i]<<" ";
           cout<<"\n";


        int j=n-1;
        while(temp--)
        {
           permuteArray(v,j);
           for(int i=0;i<n;i++)
              cout<<v[i]<<" ";
            cout<<"\n";
          j--;
        }
    }
    return 0;
}