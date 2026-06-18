#include<bits/stdc++.h>
using namespace std;
 
signed main() {
	cin.tie(0)->sync_with_stdio(0);
 
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		vector<int> v(n);
		for (int &x : v) cin >> x;
 
		for (int &x : v) x += 1;
		for (int i = 0; i < n - 1; i++) {
			if (v[i + 1] % v[i] == 0) {
				v[i + 1] += 1;
			}
		}
 
		for (int x : v) cout << x << ' ';
		cout << endl;
	}
	return 0;
}