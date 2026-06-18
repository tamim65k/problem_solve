#include<bits/stdc++.h>
using namespace std;
signed main() {
    long long t; cin >> t;
    while (t--) {
        long long n, q; cin >> n >> q;
        vector<long long>v(n + 1, 0);
        for (long long i = 1; i <= n; i++) {
            long long a; cin >> a;
            v[i] = v[i - 1] + a;
        }
        for (; q--;) {
            long long l, r, k; cin >> l >> r >> k;
            long long ans = v[n] - (v[r] - v[l - 1]) + k * (r - l + 1);
            if (ans % 2 == 1) cout << "YES" << '
';
            else cout << "NO" << '
';
        }
    }
    return 0;
}