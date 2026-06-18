#include<bits/stdc++.h>
using namespace std;
signed main() {
	int n, k; cin >> n >> k;
 
	vector<int> h(n + 1, 0);
	for (int i = 1; i <= n; i++) {
		int height; cin >> height;
		h[i] = h[i - 1] + height;
	}
 
	int minSum(INT_MAX), startIndex(1);
 
	for (int i = 1; i <= n - k + 1; i++) {
		int currendSum = h[i + k - 1] - h[i - 1];
		if (currendSum < minSum)
		{
			minSum = currendSum;
			startIndex = i;
		}
	}
 
	cout << startIndex << '
';
	return 0;
}