#include<bits/stdc++.h>
using namespace std;
// The following
// lines at the beginning of the code make input and output more efficient
#define hello ios_base::sync_with_stdio(0) 
#define Everyone cin.tie(0)
#define thankyouForCheckingOutMyCode return 0

#define ll long long 
#define vi vector<int>
#define pi pair<int,int> 
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for (int i = a; i <= b; i++)


// The following
// lines at the beginning of the code make input and output more efficient

void thisSideJyoti(){
    //fast_io;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}


void okayBye()
{
    #ifdef debug
    fprintf(stdout,"\nTIME: %.3lf sec\n", (double)clock()/(CLOCKS_PER_SEC));
    #endif
}

// C o d e Solution
void letsStartCoding()
{

    ll n;
    cin>>n;
    int ans=0;
    while(n!=0)
    {
        if(n%10 == 4 || n%10==7)
           ans++;
        n=n/10;
    }
    if(ans==4 || ans==7)
     cout<<"YES\n";
     else
      cout<<"NO\n";
   

}




 
// Start Main()

int main()
{

    hello;
    Everyone;
    thisSideJyoti();
    
    int t;
    cin>>t;
    while(t--)
    {
        letsStartCoding();
    }


    okayBye();
    thankyouForCheckingOutMyCode;

}


// End Main()