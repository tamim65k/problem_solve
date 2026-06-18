#include <bits/stdc++.h>
#define endl '
'
#define FASTER cin.tie(nullptr) -> sync_with_stdio(false)
#define ll long long int
using namespace std;
 
void solve() {
  int n, k; cin >> n >> k;
  vector<int> a(n);
  for (auto &i : a) {
    cin >> i;
    i %= k;
    if (!i) i = k;
  }
 
  vector<int> order(n);
  iota(order.begin(), order.end(), 0);
 
  stable_sort(order.begin(), order.end(), [&](int i, int j) {
    return a[i] > a[j];
  });
 
  for (auto &i : order)cout << i + 1 << ' ';
  cout << endl;
}
 
signed main() {
  FASTER;
  int t; cin >> t;
  while (t--) solve();
  return 0;
}