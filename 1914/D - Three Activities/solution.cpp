#include<bits/stdc++.h>
#define endl '
'
using namespace std;
 
vector<int> best(const vector<int> &v) {
    vector<int> b(3, -1);
 
    for (int i = 0; i < v.size(); i++) {
        if (b[0] == -1 || v[i] > v[b[0]]) {
            b[2] = b[1];
            b[1] = b[0];
            b[0] = i;
        } else if (b[1] == -1 || v[i] > v[b[1]]) {
            b[2] = b[1];
            b[1] = i;
        } else if (b[2] == -1 || v[i] > v[b[2]]) {
            b[2] = i;
        }
    }
 
    return b;
}
 
void solve() {
    int n, ans(0); cin >> n;
    vector<int> a(n), b(n), c(n);
 
    for (int &i : a)cin >> i;
    for (int &i : b)cin >> i;
    for (int &i : c)cin >> i;
 
    vector<int> bestA = best(a);
    vector<int> bestB = best(b);
    vector<int> bestC = best(c);
 
    for (int x : bestA) {
        for (int y : bestB)
        {   for (int z : bestC)
            {
                if (x != y && y != z && z != x) ans = max(ans, a[x] + b[y] + c[z]);
            }
        }
    }
 
    cout << ans << endl;
}
 
signed main() {
    cin.tie(nullptr) -> sync_with_stdio(false);
 
    int t; cin >> t;
    while (t--) solve();
    return 0;
}