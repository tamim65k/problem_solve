#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n; cin >> n;
    long long ans(0), cnt(0);
    vector<int>v(n);
    for (auto &i : v) {
        cin >> i;
        ans += i;
        cnt += (i & 1);
    }
 
    if (!cnt or cnt == n)
        cout << *max_element(v.begin(), v.end()) << '
';
    else
        cout << ans - cnt + 1 << '
';
 
}
signed main() {
    cin.tie(0) -> sync_with_stdio(0); cout.tie(0);
 
    int t; cin >> t;
    while (t--)
        solve();
 
    return 0;
}
 