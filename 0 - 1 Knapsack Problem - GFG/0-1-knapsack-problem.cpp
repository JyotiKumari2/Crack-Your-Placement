//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    
    int knapSackDp(int W, int wt[], int val[], int n , int** dp)
    {
       
         if(n==0 || W==0)
         return 0;
         if(dp[n][W]!=-1)
            return dp[n][W];
        if(wt[n-1]<=W)
          return dp[n][W]=max((val[n-1]+knapSackDp(W-wt[n-1], wt, val,n-1,dp)), knapSackDp(W,wt,val,n-1,dp));
        else if(wt[n-1]>W)
          return dp[n][W]=knapSackDp(W,wt,val,n-1,dp);  
    }
    int knapSack(int W, int wt[], int val[], int n) 
    { 
       // Your code here
     
    
    int** dp;
    dp=new int*[n+1];
    for(int i=0;i<n+1;i++)
       dp[i]= new int[W+1];
     
    for(int i=0;i<n+1;i++)
    {
        for(int j=0;j<W+1;j++)
        {
            dp[i][j]=-1;
        }
    }
    return knapSackDp(W,wt,val,n,dp);
          
    }
};

//{ Driver Code Starts.

int main()
 {
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //reading number of elements and weight
        int n, w;
        cin>>n>>w;
        
        int val[n];
        int wt[n];
        
        //inserting the values
        for(int i=0;i<n;i++)
            cin>>val[i];
        
        //inserting the weights
        for(int i=0;i<n;i++)
            cin>>wt[i];
        Solution ob;
        //calling method knapSack()
        cout<<ob.knapSack(w, wt, val, n)<<endl;
        
    }
	return 0;
}
// } Driver Code Ends