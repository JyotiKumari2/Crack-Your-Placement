#include<bits/stdc++.h>
using namespace std;
int main()
{
    // Simple Binary search code to find the first occurence of a given number
    vector<int>v={1,2,3,4,5,6,7,7,7,8};
    int ele=7;
    int start=0;
    int end=v.size()-1;
    int res=0;
    while(start<=end)
    {
        int mid = start+ (end-start)/2;
        if(v[mid]==ele)
        {
            res=mid;
            end=mid-1;
        }
        else if(v[mid]<ele)
              start=mid+1;
              else
              end=mid-1;
    }

    cout<<res+1; // +1 for one based indexing in this case the answer should be 7

    return 0;
}