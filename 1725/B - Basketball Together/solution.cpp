#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
using u8 = uint8_t;
using u16 = uint16_t;
using u32 = uint32_t;
using u64 = uint64_t;
using f128 = __float128;
 
#define elif else if
#define endl '
'
#define pb push_back
#define FASTER cin.tie(0) -> sync_with_stdio(0);cout.tie(0);
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define sz(a) (int)a.size()
#define MIN(v) *min_element(all(v))
#define MAX(v) *max_element(all(v))
#define LB(c, x) distance((c).begin(), lower_bound(all(c), (x)))
#define UB(c, x) distance((c).begin(), upper_bound(all(c), (x)))
#define UNIQUE(x) sort(all(x)), x.erase(unique(all(x)), x.end()), x.shrink_to_fit()
 
signed main() {
  FASTER;
 
  long n, d; cin >> n >> d;
  vector<long> v(n);
  for (long &i : v) cin >> i;
 
  sort(rall(v));
  long cnt(0), rem = n;
 
  for (long i = 0; i < n; i++) {
    long a = v[i];
    long num = 1 + d / a;
 
    if (num <= rem) {
      rem -= num;
      cnt++;
    }
    else break;
  }
 
  cout << cnt << endl;
 
  return 0;
}