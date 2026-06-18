#include<bits/stdc++.h>
using namespace std;
long long u[1000000], v[1000000];
 
signed main() {
    int n; cin >> n;
    for (int i = 0; i < n; i++)
        cin >> v[i + 1], u[i + 1] = v[i + 1];
 
    sort(u + 1, u + n + 1);
 
    for (int i = 0; i < n; i++)
       v[i + 1] += v[i], u[i + 1] += u[i];
 
    int m; cin >> m;
    for (; m--;) {
        int t, l, r; cin >> t >> l >> r;
        if (t == 1) cout << v[r] - v[l - 1] << '
';
        else cout << u[r] - u[l - 1] << '
';
    }
 
    return 0;
}