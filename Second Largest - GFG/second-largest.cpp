//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    // code here
	    int sL=-1;
	    int L = 0;
	    for(int i=1;i<n;i++)
	    {
	        if(arr[i]>arr[L])
	        {
	            sL=L;
	            L=i;
	        }
	        else if(arr[i]!=arr[L])
	        {
	            if(sL==-1 || arr[i]>arr[sL])
	            {
	                sL=i;
	            }
	        }
	    }
	    if(sL==-1)
	       return -1;
	    return arr[sL]; // sL index of second largest element
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.print2largest(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends