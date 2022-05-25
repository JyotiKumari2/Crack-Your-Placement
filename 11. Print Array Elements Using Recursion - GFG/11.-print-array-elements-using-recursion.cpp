// { Driver Code Starts
#include <iostream>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution{
   public:
       void printArrayRecursively(int arr[],int n)
   {
      if(n==0)
      return;
      printArrayRecursively(arr,n-1);
      cout<<arr[n-1]<<" ";
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
	    int arr[N];
	    for(int i=0;i<N;i++)
	    cin>>arr[i];
	    Solution ob;
	    ob.printArrayRecursively(arr,N);
	    cout<<endl;
	}
	return 0;
}  // } Driver Code Ends