// simple binary search on decreasing array
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v={7,6,5,4,3,2,1};
    int ele;
    cout<<"Enter element to be searched for:";
    cin>>ele;
    int start=0;
    int end=v.size()-1;
    bool flag=false;
    while(start<=end)
    {
        int mid = start+(end-start)/2;
        if(v[mid]==ele)
        {
            flag=true;
            break;
        }
        else if(v[mid]<ele)
            end=mid-1; 
        else
           start=mid+1;
    }

    if(flag)
      cout<<"Element found!!!";
      else
         cout<<"Element not found!!";
    return 0;
}