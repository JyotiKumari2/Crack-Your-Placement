#include<bits/stdc++.h>
using namespace std;
int main()
{
    // simple binary search code on finding the last occurence of a given number
    vector<int>v={1,2,3,4,4,4,4,5,6,7};
    int ele=4;
    int start =0, end = v.size()-1;
    int res=0;
    while(start<=end)
    {
        int mid = start+ (end-start)/2;
        if(v[mid]==ele)
        {
            res=mid+1;
            start=mid+1;
        }
        else if(v[mid]<ele)
              start=mid+1;
              else
              end=mid-1;
    }

    cout<<res;  // in this case the answer should be 7
    return 0;
}