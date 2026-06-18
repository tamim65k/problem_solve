#include <bits/stdc++.h>
using namespace std;
 
signed main() {
  cin.tie(0) -> sync_with_stdio(0); cout.tie(0);
 
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    vector<int>v(n);
    for (auto &i : v) cin >> i;
 
    int mid = n / 2;
    int r = n;
    vector<pair<int, int>> op;
 
    for (int i = mid; i < n; i++) {
      if (v[i] == 0)
      {
        op.push_back({mid + 1, n});
        r -= (n - mid - 1);
        break;
      }
    }
    for (int i = 0; i < mid; i++) {
      if (v[i] == 0)
      {
        op.push_back({1, mid});
        r -= (mid - 1);
        break;
      }
    }
    op.push_back({1, r});
    cout << op.size() << '
';
    for (auto o : op)
      cout << o.first << ' ' << o.second << '
';
  }
 
  return 0;
}