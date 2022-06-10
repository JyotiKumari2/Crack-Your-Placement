// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:
    //Function to fill the array elements into a hash table 
    //using Linear Probing to handle collisions.
    vector<int> linearProbing(int hashSize, int arr[], int n)
   {
       //Your code here
       vector<int> ans(hashSize,-1);
       for(int i=0;i<n;i++)
       {
           int p = arr[i]%hashSize;
           if(ans[p]==arr[i] or ans[p]==-1)
           {
               ans[p] = arr[i];
               continue;
           }
           int k = 1;
           int j = (p+k)%hashSize;
           while(ans[j]!=-1)
           {
               if(j==p)
               {
                   return ans;
               }
               if(ans[j]==arr[i])
               {
                   break;
               }
               else
               {
                   k++;
                   j = (p+k)%hashSize;
               }
           }
           ans[j] = arr[i];
       }
       return ans;
   }

};

// { Driver Code Starts.
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int hashSize;
	    cin>>hashSize;
	    
	    int  sizeOfArray;
	    cin>>sizeOfArray;
	    int arr[sizeOfArray];
	    
	    for(int i=0;i<sizeOfArray;i++)
	    cin>>arr[i];
	    
	    vector<int> hash;
	    Solution obj;
	    hash = obj.linearProbing( hashSize, arr, sizeOfArray);
	    
	    for(int i=0;i<hashSize;i++)
	    cout<<hash[i]<<" ";
	    
	    cout<<endl;
	    
	    
	}
	return 0;
}

  // } Driver Code Ends