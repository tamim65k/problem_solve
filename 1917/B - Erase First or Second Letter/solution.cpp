#include <bits/stdc++.h>
#define endl '
'
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    string kh;
    cin >> kh;
    set<char> s;
    int res = 0;
 
    for (auto i : kh) {
        s.insert(i);
        res += s.size();
    }
 
    cout << res << endl;
}
 
signed main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}