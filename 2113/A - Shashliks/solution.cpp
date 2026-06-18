#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void solve() {
  int t, a, b, x, y;
  cin >> t >> a >> b >> x >> y;
 
  auto solve = [&](int t, int a, int b, int x, int y) {
    int cnt = 0;
    cnt += max((t - a + x) / x, 0ll);
    t -= max((t - a + x) / x, 0ll) * x;
    cnt += max((t - b + y) / y, 0ll);
    return cnt;
  };
 
  cout << max(solve(t, a, b, x, y), solve(t, b, a, y, x)) << '
';
}
 
signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int tc;
  cin >> tc;
  while (tc--) solve();
  return 0;
}