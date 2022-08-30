#include "bits/stdc++.h"
using namespace std;
#define max(a, b) (a < b ? b : a)
#define min(a, b) ((a > b) ? b : a)
#define mod 1e9 + 7
#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++)
#define FORL(a, b, c) for (int(a) = (b); (a) <= (c); (a)++)
#define FORR(a, b, c) for (int(a) = (b); (a) >= (c); (a)--)
#define INF 1000000000000000003
typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define F first
#define S second
#define PB push_back
#define POB pop_back
#define MP make_pair
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--) {
       int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)a[i]=i+1;
  vector<vector<int>> v;
  int ans=0;
  
  cout<<n<<endl;
  ans=n;
  int j=0;
  while(ans-->0){
      for(int i=0;i<n;i++)cout<<a[i]<<" ";
      cout<<endl;
     
      swap(a[j],a[j+1]);
      j++;
    }
    }
    return 0;
}
