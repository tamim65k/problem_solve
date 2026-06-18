#include <bits/stdc++.h>
#define endl '
'
#define FASTER cin.tie(nullptr) -> sync_with_stdio(false)
#define ll long long int
using namespace std;
 
signed main() {
  FASTER;
  int t; cin >> t;
  while (t--) {
    int n, a, b, c; cin >> n >> a >> b >> c;
    int total = a + b + c;
 
    if (n <= a) cout << 1 << endl;
    else if (n <= a + b) cout << 2 << endl;
    else if (n <= a + b + c) cout << 3 << endl;
    else if (n > total)
    {
      int ans = (n / total) * 3;
      if (n % total == 0) cout << ans << endl;
      else if (n % total <= a)cout << ans + 1 << endl;
      else if (n % total <= a + b) cout << ans + 2 << endl;
      else if (n % total <= a + b + c) cout << ans + 3 << endl;
    }
  }
 
  return 0;
}