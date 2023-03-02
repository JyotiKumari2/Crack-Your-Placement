#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define F first
#define S second
#define pb push_back
#define si set<int>
#define vi vector<int>
#define pii pair<int,int>
#define mii map<int,int>
#define umii unordered_map<int,int>
#define endl "\n"
#define all(p) p.begin(),p.end() 
#define fL(n,v) for(int i=0;i<n;i++) cin>>v[i]
#define print(a,x,y) for(int i=x;i<y;i++) cout<<a[i]<<" "; cout<<endl
#define helloThisIsJyoti ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define wannaBePupilAsOfNow return 0

void solve()
{
	  	  
	  	  int n;
	  	  cin>>n;
	  	  vi v(n);
	  	  fL(n,v);
	  	  int ans=0;
	  	  for(int i=0;i<n;i++)
	  	  {
	  	  	if(v[i]%2!=0)
	  	  		  v[i]=1;
	  	  		else
	  	  			v[i]=0;
	  	  }
	  	  for(int i=0;i<n-1;i++)
	  	  	if(v[i]==v[i+1])
	  	  		  ans++;
	  	  cout<<ans<<"\n";
	  	   
}
int32_t main()
{
	helloThisIsJyoti;

	#ifndef ONLINE_JUDGE
	  	freopen("input.txt","r", stdin);
	  	freopen("output.txt","w",stdout);
	#endif

	  	int t=1;
	  	cin>>t;
	  	while(t--)
	  		solve();
	      
	wannaBePupilAsOfNow;
}
	   

 