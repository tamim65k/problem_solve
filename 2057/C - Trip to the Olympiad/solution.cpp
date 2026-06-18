#include <bits/stdc++.h>
#define i64 long long
 
void solve() {
    int l, r;
    std::cin >> l >> r;
    int k = 31 - __builtin_clz(l ^ r);
    int a = l | ((1 << k) - 1), b = a + 1, c = (a == l ? r : l);
    std::cout << a << " " << b << " " << c << "
";
}
 
signed main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
 
    int t = 1;
    std::cin >> t;
 
    while (t--) {
        solve();
    }
}