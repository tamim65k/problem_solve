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
 
void solve() {
	int n; cin >> n;
	vector<int>v(n);
	for (int &i : v) cin >> i;
 
	vector<int> freq(n + 1, 0);
	for (int x : v) freq[x]++;
 
	vector<int> len(n, 0);
	len[0] = (freq[v[0]] == 1);
 
	for (int i = 1; i < n; i++) {
		if (freq[v[i]] == 1)
		{
			len[i] = len[i - 1] + 1;
		} else {
			len[i] = 0;
		}
	}
 
	int mx = *max_element(len.begin(), len.end());
	if (mx == 0) {
		cout << 0 << '
';
		return;
	}
 
	for (int i = 0; i < n; i++) {
		if (len[i] == mx)
		{
			cout << i - mx + 2 << ' ' << i + 1 << '
';
			return;
		}
	}
}
 
signed main() {
	FASTER;
 
	int t; cin >> t;
	while (t--) solve();
 
	return 0;
}