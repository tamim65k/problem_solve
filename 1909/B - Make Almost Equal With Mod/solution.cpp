#include <bits/stdc++.h>
#define endl '
'
#define FASTER cin.tie(nullptr) -> sync_with_stdio(false)
#define ll long long int
using namespace std;
 
void solve() {
  ll n(0), res(2); cin >> n;
  vector<ll> v(n);
  for (auto &i : v) cin >> i;
 
  while (1) {
    set<ll> mod;
    for (ll i = 0; i < v.size(); i++) mod.insert(v[i] % res);
    if (mod.size() == 2) break;
    res *= 2;
  }
 
  cout << res << endl;
}
 
signed main() {
  FASTER;
  int t; cin >> t;
  while (t--) solve();
  return 0;
}