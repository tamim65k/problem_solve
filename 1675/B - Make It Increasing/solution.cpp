#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define elif else if
#define endl '
'
#define pb push_back
#define FASTER cin.tie(0) -> sync_with_stdio(0);cout.tie(0);
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define sz(a) (int)a.size()
#define MIN(v) *min_element(all(v))
#define MAX(v) *max_element(all(v))
#define UNIQUE(x) sort(all(x)), x.erase(unique(all(x)), x.end()), x.shrink_to_fit()
#define debug(x) cout << #x << " = " << x << "
";
#define vdebug(a) cout << #a << " = "; for(auto x: a) cout << x << " "; cout << "
";
 
 
void solve() {
  int n; cin >> n;
  vector<int>v(n);
  for (auto &i : v) cin >> i;
 
  int ans(0);
  for (int i = n - 2; i >= 0; i--) {
    while (v[i] >= v[i + 1] and v[i] > 0) {
      v[i] /= 2;
      ans++;
    }
    if (v[i] == v[i + 1])
    {
      cout << -1 << endl;
      return;
    }
  }
 
  cout << ans << endl;
}
 
signed main() {
  FASTER;
 
  int t; cin >> t;
  while (t--) solve();
 
  return 0;
}