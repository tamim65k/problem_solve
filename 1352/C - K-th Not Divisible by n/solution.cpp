#include <bits/stdc++.h>
using namespace std;
 
int n, k;
bool notDivisible(int x) {
    return (x - x / n) >= k;
}
 
signed main() {
    cin.tie(0) -> sync_with_stdio(0); cout.tie(0);
 
    int t; cin >> t;
    while (t--) {
        cin >> n >> k;
        int l(1), r(2e9), ans(1);
        while (l <= r) {
            int mid = l + (r - l) / 2;
            if (notDivisible(mid))
            {
                ans = mid;
                r = mid - 1;
            }
            else
                l = mid + 1;
        }
        cout << ans << '
';
    }
 
    return 0;
}