// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//Complete the below functions
int maximumElement(int arr[],int n)
{
    //Your code here
    return *max_element(arr,arr+n);
}

int minimumElement(int arr[],int n)
{
    //Your code here
    return *min_element(arr,arr+n);
}

// { Driver Code Starts.


int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    
	    cout<<maximumElement(arr,n)<<" "<<minimumElement(arr,n)<<endl;
	    
	}
	return 0;
}  // } Driver Code Ends