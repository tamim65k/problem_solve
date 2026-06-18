#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void solve() {
  int n;
  cin >> n;
  vector<int> a(n), b(n);
  for (int &i : a) cin >> i;
  for (int &i : b) cin >> i;
 
  int max_diff(0);
  for (int i = 0; i < n; i++)
    if (a[i] > b[i]) max_diff += (a[i] - b[i]);
  cout << max_diff + 1 << '
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