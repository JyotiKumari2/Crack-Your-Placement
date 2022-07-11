#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++)
           cin>>arr[i];
    int *freq = new int [6];  // Because it is mentioned that type of bird is 1,2,3,4,5
    for(int i=0;i<6;i++)
    {
      freq[i]=0;
    }

    for(int i=0;i<n;i++)
    {
         freq[arr[i]]++;
    }
    int lowestId=0;
    int maxBirdCount=freq[0];
    for(int i=1;i<6;i++)
    {
        if(freq[i]>maxBirdCount)
            {
                lowestId=i;
                maxBirdCount=freq[i];

            }
    }

     cout<<lowestId<<"\n";

    delete []arr;
    delete []freq;
    return 0;
}