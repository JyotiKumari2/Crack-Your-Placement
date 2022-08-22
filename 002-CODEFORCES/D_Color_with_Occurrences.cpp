#include<bits/stdc++.h>
#define len(s) (int)s.size()
#define forn(i, n) for (int i = 0; i < int(n); i++)

using namespace std;
int ans = 0;
bool ok = true;

void Find(int a, int b, string &t, vector<string>&str, vector<pair<int, int>>&match){
    int Max = 0, id = -1, pos = -1;
    for(int i = a; i <= b; i++){
        for(int j = 0; j < len(str); j++){
            string s = str[j];
            if(i + len(s) > len(t) || i + len(s) <= b) continue;
            if(t.substr(i, len(s)) == s) {
                if(i + len(s) > Max){
                    Max = i + len(s);
                    id = j;
                    pos = i;
                }
            }
        }
    }
    if(id == -1) {
        ok = false;
        return;
    }
    else{
        match.emplace_back(id, pos);
        ans++;
        if(Max == len(t)) return;
        else Find(max(pos + 1, b +1), Max, t, str, match);
    }
}


void solve(){
    ans = 0;
    ok = true;

    string t;
    cin >> t;
    int n;
    cin >> n;

    vector<string>s(n);
    vector<pair<int, int>>match;

    forn(i, n) {
        cin >> s[i];
    }

    Find(0, 0, t, s, match);
    if(!ok) cout << "-1\n";
    else{
        cout << ans << endl;
        for(auto &p : match) cout << p.first + 1 << ' ' << p.second + 1 << endl;
    }

}

int main(){
    int q;
    cin >> q;
    while(q--){
        solve();
    }
    return 0;
}