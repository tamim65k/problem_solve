#include <bits/stdc++.h>
using namespace std;
#define int long long
 
bool isSquare(int x) {
  if (x >= 0) {
    int a = sqrt(x);
    return a * a == x;
  }
  return false;
}
 
void solve() {
  int a;
  cin >> a;
  if (isSquare(a))
    cout << 0 << ' ' << sqrt(a) << '
';
  else
    cout << -1 << '
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