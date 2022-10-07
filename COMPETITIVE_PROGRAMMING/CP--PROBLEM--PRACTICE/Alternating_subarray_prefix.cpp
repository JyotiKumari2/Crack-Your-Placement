#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    long long int arr[n];
	    for(int i=0;i<n;i++)
	        cin>>arr[i];
	   vector<int>ans(n);
	   ans[n-1]=1;
	   for(int i=n-2;i>=0;i--)
	   {
	       if(arr[i]*arr[i+1]<0)
	           ans[i]=ans[i+1]+1;
	           else
	           ans[i]=1;
	   }
	   for(auto i:ans)
	      cout<<i<<" ";
	    cout<<"\n";
	}
	return 0;
}
