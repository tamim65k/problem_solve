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
 
signed main() {
	FASTER;
	int t; cin >> t;
	while (t--) {
		string s;
		int n; cin >> n >> s;
		set<char> leftSet, rightSet;
		vector<int> leftDistinct(n), rightDistinct(n);
 
		for (int i = 0; i < n; ++i) {
			leftSet.insert(s[i]);
			leftDistinct[i] = sz(leftSet);
		}
 
		for (int i = n - 1; i >= 0; --i) {
			rightSet.insert(s[i]);
			rightDistinct[i] = sz(rightSet);
		}
 
		int maxDistinct = 0;
		for (int i = 0; i < n - 1; i++) {
			maxDistinct = max(maxDistinct, leftDistinct[i] + rightDistinct[i + 1]);
		}
 
		cout << maxDistinct << endl;
	}
	return 0;
}