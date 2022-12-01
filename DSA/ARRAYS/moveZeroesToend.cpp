#include<bits/stdc++.h>
using namespace std;
void createPartition(string arithOperation, double arithResult, vector<int>arrayOfIntegers)
{
    int n= (arrayOfIntegers.size());
    vector<pair<int,int>>ans;
    sort(arrayOfIntegers.begin(),arrayOfIntegers.end());
    int  l = 0;
    int  r = n-1;
    bool check = true;
    
    while(true)
    {
        if(arithOperation == "+")
        {
        if(arrayOfIntegers[l] + arrayOfIntegers[r] != arithResult)
        {
            check =false;
            return;
        }
        else
        {
            ans.push_back({arrayOfIntegers[l],arrayOfIntegers[r]});
            l++;
            r--;
        }
        }
        else if(arithOperation == "-")
        {
            
            if(abs(arrayOfIntegers[l] - arrayOfIntegers[r]) != abs(arithResult))
        {
            check =false;
            return;
        }
        else
        {
            ans.push_back({arrayOfIntegers[l],arrayOfIntegers[r]});
            l++;
            r--;
        }
        }
        else if(arithOperation == "*")
        {
             if(arrayOfIntegers[l] * arrayOfIntegers[r] != arithResult)
        {
            check =false;
            return;
        }
        else
        {
            ans.push_back({arrayOfIntegers[l],arrayOfIntegers[r]});
            l++;
            r--;
        }
        }
        else if(arithOperation == "/")
        {

            if(arrayOfIntegers[l] / arrayOfIntegers[r] != arithResult)
        {
            check =false;
            return;
        }
        else
        {
            ans.push_back({arrayOfIntegers[l],arrayOfIntegers[r]});
            l++;
            r--;
        }

        }
        

    }
    if(!check)
       cout<<"Invalid Input";
       else
       {
        for(int i=0;i<ans.size();i++)
        {
             cout<<ans[i].first<<" "<<ans[i].second;
            cout<<"\n";
        }
       }

}
int main()
{
    string op;
    double x;
    vector<int>arr;
    cin>>op;
    cin>>x;
    for(int i=0;i<5;i++)
       cin>>arr[i];
    createPartition(op,x,arr);
    return 0;
}



























