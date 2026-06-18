#include <bits/stdc++.h>
using namespace std;
 
int main(int argc, char const *argv[])
{
	int t; cin >> t;
 
	while (t--) {
 
		int n, k; cin >> n >> k;
		vector<int> v(n);
		for (int i = 0; i < n; ++i)
		{
			cin >> v[i];
		}
 
		sort(v.begin(), v.end());
 
		int count = 1; int ans = 1;
		for (int i = 0; i < n - 1; i++) {
			if (v[i + 1] - v[i] > k)
			{
				count = 1;
			} else {
				count++;
			}
			ans = max(ans, count);
		}
 
		cout << n - ans << '
';
	}
	return 0;
}