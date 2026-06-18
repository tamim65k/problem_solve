#include<bits/stdc++.h>
using namespace std;
 
signed main() {
  cin.tie(0)->sync_with_stdio(false); cout.tie(0);
 
  int T, n, i, t, flag;
 
  for (cin >> T; T > 0; T--) {
    cin >> n;
    flag = 0;
 
    for (i = 0; i < n; i++) {
      cin >> t;
      if (t <= i * 2 or t <= 2 * (n - i - 1))
        flag = 1;
    }
 
    if (flag) cout << "NO
";
    else cout << "YES
";
  }
 
  return 0;
}