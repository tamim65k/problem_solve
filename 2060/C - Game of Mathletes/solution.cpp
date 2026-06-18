#include<bits/stdc++.h>
using namespace std;
 
void tc() {
  long long n, k;
  cin >> n >> k;
  vector<long long> v(n);
  for (long long &i : v) cin >> i;
 
  vector<long long> occ(k + 1, 0);
  for (long long i : v) if (i < k) occ[i]++;
 
  long long ans(0);
  for (long long i = 1; i < k; i++) {
    if (i == k - i) ans += occ[i] / 2;
    else {
      long long mini = min(occ[i], occ[k - i]);
      ans += mini;
      occ[i] -= mini;
      occ[k - i] -= mini;
    }
  }
 
  cout << ans << '
';
}
 
int main() {
  cin.tie(nullptr)->sync_with_stdio(false);
  long long t; cin >> t;
  for (; t--;) tc();
  return 0;
}