#include <bits/stdc++.h>
using namespace std;
using ll = long long;
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
#define UNIQUE(x) sort(all(x)), x.erase(unique(all(x)), x.end()), x.shrink_to_fit()
#define debug(x) cout << #x << " = " << x << "
";
#define vdebug(a) cout << #a << " = "; for(auto x: a) cout << x << " "; cout << "
";
 
 
void solve() {
	int n, k; cin >> n >> k;
	vector<int> a(n), b(n);
	for (int &i : a) cin >> i;
	for (int &i : b) cin >> i;
	int res(0), sum(0), mx(0);
 
	for (int i = 0; i < min(n, k); ++i)
	{
		sum += a[i];
		mx = max(mx, b[i]);
		res = max(res, sum + mx * (k - i - 1));
	}
 
	cout << res << '
';
}
 
signed main() {
	FASTER;
 
	int t; cin >> t;
	while (t--) solve();
 
	return 0;
}