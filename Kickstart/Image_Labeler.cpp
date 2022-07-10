#include<bits/stdc++.h>

#define ll long long 
#define dd long double
#define sorting(a,n) sort(a.begin(),a.end(),comp);
using namespace std;
bool comp(int a,int b){return a>b;}
int32_t main()
{

    int t;
    cin>>t;
    int cse=1;
    while(t--)
    {
        int N,M;
        cin>>N>>M;
       vector<int>arr(N);
         
        for(int i=0;i<N;i++)
          cin>>arr[i];

        

         double  median=0.0000;
 

        sorting(arr,N);

       for(int i=0;i<M-1;i++)
       {
        median+=arr[i];
       }

       if((N-M+1)%2==1)
       {
        median=median+arr[M-1+((N-M)/2)];
       }

       else
       { 
        median+= (double)(arr[M-1+((N-M)/2)]+arr[M+((N-M)/2)])/2; 
        }


        
       cout<<"Case #"<<fixed<<setprecision(1)<<cse++<<": "<<median<<"\n";

         
    }

    return 0;
}




 