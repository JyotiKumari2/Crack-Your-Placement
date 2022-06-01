// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

/*  Function to calculate the longest consecutive ones
*   N: given input to calculate the longest consecutive ones
*/
class Solution
{
    public:
   int maxConsecutiveOnes(int N)
    {
        // code here
        if(N==0) return 0;
        
        int cnt=0;
        int ans=0;
        while(N>0)
        {
            if(N&1==1)
            {
                N=N>>1;
                cnt++;
               
            }
           else 
            {
                 
            cnt=0;
           
                N=N>>1;
            }
            if(cnt>ans)
            {
                ans=cnt;
            }
            
         
        }
        return ans;
        
    }
};


// { Driver Code Starts.

// Driver Code
int main() {
	int t;
	cin>>t;//testcases
	while(t--)
	{
		int n;
		cin>>n;//input n
		Solution obj;
		//calling maxConsecutiveOnes() function
		cout<<obj.maxConsecutiveOnes(n)<<endl;
	}
	return 0;
}  // } Driver Code Ends