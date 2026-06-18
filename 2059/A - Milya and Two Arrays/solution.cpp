#include <bits/stdc++.h>
using namespace std;
 
#define endl '
'
#define FASTER ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define pb push_back
#define sz(a) (int)a.size()
 
void solve() {
	int n; cin >> n;
	vector<int> a(n), b(n);
	for (int i = 0; i < n; i++) cin >> a[i];
	for (int i = 0; i < n; i++) cin >> b[i];
	set<int> as(a.begin(), a.end());
	set<int> bs(b.begin(), b.end());
 
	if (as.size() >= 2 and bs.size() >= 2) {
		cout << "YES" << endl;
	}
	else if (as.size() >= 3 and bs.size() >= 1) 		cout << "YES" << endl;
	else if (bs.size() >= 3 and as.size() >= 1) 		cout << "YES" << endl;
 
	else cout << "NO" << endl;
}
 
signed main() {
	FASTER;
 
	int t; cin >> t;
	while (t--) solve();
 
	return 0;
}