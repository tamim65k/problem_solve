#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int t; cin >> t;
    while (t--) {
        int n, x, mn(1e9 + 1), mx(0), ans(0);
        cin >> n >> x;
        vector<int> v(n);
        for (auto &i : v) cin >> i;
 
        for (int i = 0; i < n; i++) {
            mx = max(mx, v[i]);
            mn = min(mn, v[i]);
 
            if (mx - mn > 2 * x)
            {
                ans++;
                mn = mx = v[i];
            }
        }
 
        cout << ans << endl;
    }
    return 0;
}