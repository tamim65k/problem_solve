/*** From dust I have come, dust I will be.  ***/
 
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define TAMIM ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl '
'
 
void solve() {
    ll n,m; cin>>n>>m;
    string x,s; cin>>x; cin>>s;
 
    for(ll i=0;i<6;i++) {
        if (x.find(s) != string::npos) {
            cout<<i<<endl;
            return;
        } else {
            x += x;
        }
    }
 
    cout<<-1<<endl;
}
 
int32_t main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "a", stderr);
#endif
    TAMIM;
    int tc;
    cin >> tc;
 
    while (tc--) {
        solve();
    }
 
    return 0;
}