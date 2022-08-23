#include<bits/stdc++.h>
 
using namespace std;
 
signed main() {
     
    int t; 
    cin >> t;
    while (t--) {
        int n, m; cin >> n >> m;
        cout << n + m + min(n, m) - 3 + min(max(n, m) - 1, 1) << "\n";
    }
    return 0;
}