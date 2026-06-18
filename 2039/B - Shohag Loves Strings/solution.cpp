#include <bits/stdc++.h>
using namespace std;
 
void solve() {
  string s; cin >> s;
  int n = s.size();
  for (int i = 0; i + 1 < n; i++) {
    if (s[i] == s[i + 1])
    {
      cout << s.substr(i, 2) << '
';
      return;
    }
  }
  for (int i = 0; i + 2 < n; ++i)
  {
    if (s[i] != s[i + 1] and s[i] != s[i + 2] and s[i + 1] != s[i + 2])
    {
      cout << s.substr(i, 3) << '
';
      return;
    }
  }
  cout << -1 << '
';
}
 
signed main() {
  cin.tie(0) -> sync_with_stdio(0); cout.tie(0);
  int t; cin >> t;
  while (t--)
    solve();
  return 0;
}