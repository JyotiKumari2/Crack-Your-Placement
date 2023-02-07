#include<bits/stdc++.h>
using namespace std;
int main()
{

    // Maximum Area Histogram
    vector<int>arr = {6,2,5,4,5,1,6}; // given array
    // nsl
    vector<int>nsl;
    stack<pair<int,int>>sl;
    for(int i=0;i<arr.size();i++)
    {
        if(sl.size()==0)
            nsl.push_back(-1);
        else if(sl.size()>0 && sl.top().first<arr[i])
             nsl.push_back(sl.top().second);
        else if(sl.size()>0 && sl.top().first>=arr[i])
         {
            while(sl.size()>0 && sl.top().first>=arr[i])
                sl.pop();
            if(sl.size()==0)
               nsl.push_back(-1);
            else
               nsl.push_back(sl.top().second);
         }
         sl.push({arr[i],i});
    }


    // nsr
    vector<int>nsr;
    stack<pair<int,int>>sr;
    for(int i=arr.size()-1;i>=0;i--)
    {
        if(sr.size()==0)
           nsr.push_back(arr.size());
        else if(sr.size()>0 && sr.top().first<arr[i])
             nsr.push_back(sr.top().second);
        else if(sr.size()>0 && sr.top().first>=arr[i])
        {
            while(sr.size()>0 && sr.top().first>=arr[i])
                sr.pop();
            if(sr.size()==0)
                 nsr.push_back(arr.size());
                 else
                   nsr.push_back(sr.top().second);
        }
        sr.push({arr[i],i});

    }

    reverse(nsr.begin(),nsr.end());

    // find width;
    vector<int>width(nsr.size());
    for(int i=0;i<nsr.size();i++)
    {
        width[i]=(nsr[i]-nsl[i])-1;
    }

    


    // //debug:
    // for(int i=0;i<width.size();i++)
    //   cout<<width[i]<<" ";

    // find area 
    vector<int>area(nsr.size());
    int maxArea=INT_MIN;
    for(int i=0;i<nsr.size();i++)
    {
        area[i]= arr[i]*width[i];
        maxArea=max(maxArea,area[i]);
    }

    cout<<"Maximum area of histogram: "<<maxArea;


    return 0;
}
