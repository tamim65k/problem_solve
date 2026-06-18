#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
void solve() {
    int n, k; cin >> n >> k;
    int ans = k, e = 0;
    
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        if (x % 2 == 0) e++;
        if (x % k == 0) ans = 0;
        ans = min(ans, k - x % k);
    }
    if (k == 4) {
        if (e >= 2) ans = 0;
        else if (e == 1) ans = min(ans, 1);
        else ans = min(ans, 2);
    }
    cout << ans << endl;
}
 
signed main() {
    cin.tie(0) -> sync_with_stdio(0);
    int test; cin >> test;
    while (test--) solve();
    return 0;
}