#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v={11,12,13,14,16,3,4,5,6};
    int start=0;
    int end=v.size()-1;
    int ans=0;
    while(start<=end)
    {
        int mid = (start+end)/2;
        int prev = v[mid-1];
        int next = v[mid+1];
        if(v[mid]<=prev && v[mid]<=next)
        {
              ans = mid;
              break;
        }
        else if(v[mid]<v[start])
              end=mid-1;
              else
               start=mid+1;


    }
    cout<<ans+1;
    return 0;
}