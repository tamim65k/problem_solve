/***from dust i have come, dust i will be***/
 
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FASTER ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '
'
 
void solve() {
    ll n;cin>>n;
    if (n <=2) cout << 0 << endl;
    else cout << (n-1)/2 << endl;
}
 
int32_t main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "a", stderr);
#endif
    FASTER;
    ll tc;
    cin >> tc;
 
 
    while (tc--) {
        solve();
    }
 
    return 0;
}