// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
 public:
   int rev=0,rem;
   int reverse(int n)
   {
       if(n)
       {
           rem=n%10;
           rev=rev*10 + rem;
           reverse(n/10);
       }
       return rev;
   }
   bool isPalin(int n)
   {
       if(n<10) return 1;
       return n==reverse(n);
   }
};

// { Driver Code Starts.

int main() {
	int T;
	cin>>T;
	while(T--) 
	{
	    int N;
	    cin>>N;
	    Solution obj;
	    cout<<obj.isPalin(N)<<endl;
	}
	return 0;
}  // } Driver Code Ends