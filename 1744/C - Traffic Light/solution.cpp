#include <bits/stdc++.h>
using namespace std;
 
#define endl '
'
#define FASTER ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define pb push_back
#define sz(a) (int)a.size()
 
void solve() {
    int cnt(0), res(0), n(0);
    char c;
    bool f = false;
    cin >> n >> c;
    string s; cin >> s;
    s += s;
 
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == c)
        {
            cnt = 0;
            while (s[i] != 'g' and i < s.size()) {
                cnt++;
                i++;
            }
            res = max(res, cnt);
        }
    }
    cout << res << endl;
}
 
signed main() {
    FASTER;
 
    int t; cin >> t;
    while (t--) solve();
 
    return 0;
}