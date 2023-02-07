#include<bits/stdc++.h>
using namespace std;

int firstOccurrence(vector<int>&v, int ele)
{
        int start = 0;
        int end = v.size()-1;
        int res=0;
        while(start<=end)
        {
            int mid = start+(end-start)/2;
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

        return res;
}

int lastOccurrence(vector<int>&v, int ele)
{

      int start=0;
      int end=v.size()-1;
      int res=0;
      while(start<=end)
      {
        int mid = start+(end-start)/2;
        if(v[mid]==ele)
        {
            res=mid;
            start=mid+1;
        }

        else if(v[mid]<ele)
           start=mid+1;
           else
           end=mid-1;
      }

      return res;

} 
int main()
{
    //simple bs code to find the number of times the given number occur in the array
    vector<int>v={1,2,2,2,2,3,4,4,5,6};
    int ele=4;
    int f = firstOccurrence(v,ele);
    int l = lastOccurrence(v,ele);

    int ans = l-f+1;
    cout<<ans<<"\n";
   
    return 0;
}