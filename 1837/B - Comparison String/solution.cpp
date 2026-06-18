#include <bits/stdc++.h>
using namespace std;
 
#define ll long long int
#define FASTER ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '
'
 
const int MAX_SIZE = 2e5 + 7;
char characters[MAX_SIZE];
 
void solve() {
	int length;
	cin >> length;
 
	for (int i = 0; i < length; i++) {
		char character;
		cin >> character;
		characters[i] = character;
	}
 
	ll current_consecutive = 1;
	ll max_consecutive = 1;
 
	for (int i = 1; i < length; i++) {
		if (characters[i] != characters[i - 1]) {
			current_consecutive = 1;
		} else {
			current_consecutive++;
		}
		max_consecutive = max(current_consecutive, max_consecutive);
	}
 
	cout << max_consecutive + 1 << endl;
}
 
int32_t main() {
	FASTER;
	int test_cases;
	cin >> test_cases;
 
	while (test_cases--) {
		solve();
	}
 
	return 0;
}