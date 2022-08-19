#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define ld long double
vector<ll> vec;
ll n;
 
int main() {
    
 
	ll t;
	cin >> t;
 
	while (t--) {
		cin >> n;
 
		vec.resize(n);
		for (auto& c : vec) cin >> c;
 
		sort(vec.begin(), vec.end());
 
		cout << vec[n - 1] + vec[n - 2] - vec[0] - vec[1] << "\n";
	}
 
	return 0;
}