// { Driver Code Starts
//Initial Template for C++


#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

void sortArray(int a[], char b[], int n){
    
    // code here
    vector<pair<int,char>>pairs(n);
    for(int i=0;i<n;i++)
    {
        pairs[i]=make_pair(a[i],b[i]);
    }
    sort(pairs.begin(),pairs.end());
    for(int i=0;i<n;i++)
    {
        cout<<pairs[i].second<<" ";
    }
     
}


// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i = 0;i<n;i++){
            cin>>a[i];
        }
        
        char b[n];
        for(int i = 0;i < n; i++){
            cin>>b[i];
        }
        
        sortArray(a, b, n);
        
        
        cout<<"\n";
    }
}  // } Driver Code Ends