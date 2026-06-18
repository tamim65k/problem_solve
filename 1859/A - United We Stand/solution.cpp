/*** From dust I have come, dust I will be. ***/
 
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define TAMIM ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl '
'
 
void solve() {
    ll n = 0;
    cin >> n;
    vector<ll> input(n);
    for (auto &x : input) cin >> x;
 
    sort(input.begin(), input.end());
 
    if (input.back() == input[0]) {
        cout << -1 << endl;
        return;
    } else {
        ll it = 0;
        while (it < n && input[it] == input[0]) {
            it++;
        }
        cout << it << " " << n - it << endl;
        for (ll j = 0; j < it; j++) cout << input[j] << " ";
        cout << endl;
        for (ll j = it; j < n; j++) cout << input[j] << " ";
        cout << endl;
    }
}
 
int32_t main() {
 
    TAMIM;
 
    int tc;
    cin >> tc;
 
    while (tc--) {
        solve();
    }
 
    return 0;
}