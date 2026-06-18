#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;
void solve() {
    ll A, B;
    cin >> A >> B;
    if (B % A == 0) {
        ll ans = B * (B / A);
        cout << ans << '
';
    } else {
        ll ans = lcm(A, B);
        cout << ans << '
';
    }
}
int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--) solve();
}