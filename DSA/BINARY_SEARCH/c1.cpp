#include<bits/stdc++.h>
using namespace std;
int main()
{

    // simple binary search code
    vector<int>sortedVec={1,2,3,4,5,6};
    int start=0;
    int end=sortedVec.size()-1;
    bool flag=false;
    int ele;
    cout<<"Enter element to be searched for:";
    cin>>ele;
    cout<<"\n";
    while(start<=end)
    {
        int mid = start+end-start/2;
        if(sortedVec[mid]==ele)
          {
            flag=true;
            break;
          }

          else if(sortedVec[mid]<ele)
                start=mid+1;
                else
                end=mid-1;   
    }
    if(flag==true)
      cout<<"Element found!!!\n";
      else
         cout<<"ELement not found!!!\n";
    return 0;
}