// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;
void rotate (vector<vector<int> >& matrix);


 // } Driver Code Ends
//User function template for C++

/* matrix : given input matrix, you are require 
 to change it in place without using extra space */
 

void rotate(vector<vector<int> >& matrix)
{
    // Your code goes here
    
    int n=matrix.size();
    vector<vector<int>>temp(n, vector<int>(n));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            temp[i][j]=matrix[j][i];
        }
    }
    int low=0,high=n-1;
    while(low<=high)
    {
    for(int i=0;i<n;i++)
    {
        swap(temp[low][i], temp[high][i]);
       
    }
     low++;
     high--;
    }
     
     for(int i=0;i<n;i++)
     {
         for(int j=0;j<n;j++)
          matrix[i][j]=temp[i][j];
     }
    
    
}


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t; 
    while(t--)
    {
        int n;
        cin>>n; 
        vector<vector<int> > matrix(n);
        for(int i=0; i<n; i++)
        {
            matrix[i].resize(n);
            for(int j=0; j<n; j++)
                cin>>matrix[i][j]; 
        }
        rotate(matrix);
        for (int i = 0; i < n; ++i)
        {
            for(int j=0; j<n; j++)
                cout<<matrix[i][j]<<" ";
            cout<<"\n";
        }
    }
    return 0;
}

  // } Driver Code Ends