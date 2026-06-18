#include<bits/stdc++.h>
using namespace std;
signed main() {
  cin.tie(0)->sync_with_stdio(false);
  int t; cin >> t;
  while (t--) {
    int n, k; cin >> n >> k;
    int low = 1, high = n;
    for (int i = 1; i <= n; i++) {
      int a = i % k;
      if (a == 0) cout << low++ << (i == n ? '
' : ' ');
      else cout << high-- << (i == n ? '
' : ' ');
    }
  }
  return 0;
}