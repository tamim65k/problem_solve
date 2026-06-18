#include <bits/stdc++.h>
using namespace std;
 
int n, k;
signed main() {
  cin.tie(0) -> sync_with_stdio(0); cout.tie(0);
 
  int t; cin >> t;
  while (t--) {
    cin >> n >> k;
    long long sum(0);
    vector<int>v(n);
    for (auto &i : v)
      cin >> i;
    if (k >= 2)
    {
      sort(v.begin(), v.end(), greater<int>());
      sum = accumulate(v.begin(), v.begin() + k + 1, 0LL);
    }
    else {
      int l = *max_element(v.begin(), v.end() - 1);
      int r = *max_element(v.begin() + 1, v.end());
      sum = max(l + v.back(), r + v.front());
    }
 
    cout << sum << '
';
  }
 
  return 0;
}