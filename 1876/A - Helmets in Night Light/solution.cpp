#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
void solve() {
    ll n, p; cin >> n >> p;
    vector<ll> a(n), b(n);
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (ll i = 0; i < n; i++) {
        cin >> b[i];
    }
 
    vector<int> index(n);
    iota(index.begin(), index.end(), 0);
    sort(index.begin(), index.end(), [&](int i, int j) {
        return b[i] < b[j];
    }
        );
 
    ll minCost = p;
    n -= 1;
    for (auto i : index) {
        while (n > 0 && a[i] > 0) {
            a[i]--, n--;
            minCost += min(p, b[i]);
        }
    }
    cout << minCost << "
";
}
 
signed main() {
    cin.tie(nullptr) -> sync_with_stdio(false);
    ll t; cin >> t;
    while (t--) solve();
    return 0;
}