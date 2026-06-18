#include <bits/stdc++.h>
using namespace std;
 
int distance(vector<int> v) {
  int f(-1), l(-1);
 
  for (int i = 0; i < v.size(); i++) {
    if (v[i] == 1) {
      if (f == -1) f = i;
      l = i;
    }
  }
 
  if (f == -1 or l == -1 or f == l) return 0;
 
  return l - f;
}
 
void solve() {
  int n, t;
  cin >> n >> t;
  vector<int> v(n);
 
  for (int &i : v) cin >> i;
 
  if (distance(v)+1 <= t)
    cout << "YES
";
  else
    cout << "NO
";
}
 
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) solve();
  return 0;
}