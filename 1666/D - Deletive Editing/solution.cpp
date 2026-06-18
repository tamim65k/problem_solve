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
	string s, t, q;
	cin >> s >> t;
	vector<int> cnt(256);
 
	for (int i = 0; i < sz(s); i++) cnt[s[i]]++;
	for (int i = 0; i < sz(t); i++) cnt[t[i]]--;
 
	if (*min_element(all(cnt)) < 0 ? (cout << "NO
", 1) : 0) return;
 
	for (int i = 0; i < sz(s); i++) {
		if (cnt[s[i]] == 0) q.push_back(s[i]);
		else cnt[s[i]]--;
	}
 
	if (t == q) cout << "YES
";
	else cout << "NO
";
}
 
signed main() {
	FASTER;
 
	int t; cin >> t;
	while (t--) solve();
 
	return 0;
}