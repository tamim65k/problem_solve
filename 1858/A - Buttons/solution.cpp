/*** From dust I have come, dust I will be. ***/
 
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define TAMIM ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl '
'
 
void solve() {
    ll a, b, c;
    cin >> a >> b >> c;
 
    if (c % 2 == 0)
    {
        if (a > b)
        {
            cout << "First" << endl;
        } else {
            cout << "Second" << endl;
        }
    } else {
        if (b > a)
        {
            cout << "Second" << endl;
        } else {
            cout << "First" << endl;
        }
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