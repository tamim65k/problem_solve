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
  int cnt(0);
 
  while (1) {
    if (n <= 1) break;
    if (n % 6 == 0) {
      n /= 6;
      cnt++;
    }
    elif(n % 3 == 0) {
      n *= 2;
      cnt++;
    }
    else {
      cout << -1 << endl;
      return;
    }
  }
  cout << cnt << endl;
}
 
signed main() {
  FASTER;
 
  int t; cin >> t;
  while (t--) solve();
 
  return 0;
}