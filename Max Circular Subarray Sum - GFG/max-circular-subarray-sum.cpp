//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // arr: input array
    // num: size of array
    //Function to find maximum circular subarray sum.
    
    int maxSum(int arr[], int num)
    {
        
          int max_sum = INT_MIN;
        int sum =0;
        
        for(int i=0;i<num;i++)
        {
            sum+=arr[i];
            max_sum=max(max_sum,sum);
            if(sum<0)
               sum=0;
        }
        return max_sum;
        
    }
    int circularSubarraySum(int arr[], int num){
        
        // your code here
        
        // brute force approach  ---> O(N^2)
        
        
        // using kadane's algorithm
        
        // int res = arr[0];
        
        // for(int i=0;i<num;i++)
        // {
        //     int curr_max = arr[i];
        //     int curr_sum = arr[i];
            
        //     for(int j=1;j<num; j++)
        //     {
        //         int index = (i+j)%num;
        //         curr_sum+=arr[index];
        //         curr_max=max(curr_max,curr_sum);
        //     }
        //     res = max(res, curr_max);
        // }
        // return res;
        
        
        // using efficient approach
        
        
        // first find maximum subarray sum of a normal array using kadane's algorithm
        // secondly: find minimum subarray sum of a normal array 
        
        // maximum subaaray sum
        
        
         int max_sum = maxSum(arr,num);
        if(max_sum<0)
          return max_sum;
        
        // min_sum
       
        int aSum =0;
        for(int i=0;i<num;i++)
        {
           aSum+=arr[i];
           arr[i] = (-1)*arr[i];
        }
        
        int min_sum = maxSum(arr,num);
        int circularSum = min_sum + aSum;
        
        
        return max(circularSum, max_sum);
        
        
    }
};

//{ Driver Code Starts.

int main()
 {
	int T;
	
	//testcases
	cin>> T;
	
	while (T--)
	{
	    int num;
	    
	    //size of array
	    cin>>num;
	    int arr[num];
	    
	    //inserting elements
	    for(int i = 0; i<num; i++)
	        cin>>arr[i];
	        
	    Solution ob;
	    //calling function
	    cout << ob.circularSubarraySum(arr, num) << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends