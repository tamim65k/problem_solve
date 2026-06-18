#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void solve() {
  int n;
  cin >> n;
  vector<int> a(n + 1), pre(n + 1, INT_MAX), suf(n + 2);
 
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
    pre[i] = min(pre[i - 1], a[i]);
  }
 
  for (int i = n; i >= 1; i--) suf[i] = max(suf[i + 1], a[i]);
 
  for (int i = 1; i <= n; i++)
    cout << (a[i] == pre[i] or a[i] == suf[i] ? 1 : 0);
  cout << '
';
}
 
signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) solve();
  return 0;
}