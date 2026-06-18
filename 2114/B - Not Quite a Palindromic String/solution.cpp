#include <bits/stdc++.h>
using namespace std;
 
void solve() {
  int n, k;
  cin >> n >> k;
  string s;
  cin >> s;
  vector<int> cnt(2);
  for (char c : s) {
    cnt[c - '0']++;
  }
  int mn = max(cnt[0], cnt[1]) - n / 2;
  int mx = cnt[0] / 2 + cnt[1] / 2;
  if (k >= mn && (k - mn) % 2 == 0 && k <= mx)
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