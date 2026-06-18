#include<bits/stdc++.h>
using namespace std;
const int N = 2e5;
int A[N];
signed main() {
    int n; cin >> n;
    for (int i = 0; i < n; i++) cin >> A[i];
    for (int i = 0; i < n; i++) A[i + 1] += A[i];
    int m; cin >> m;
    for (; m--;) {
        int q; cin >> q;
        cout << lower_bound(A, A + n, q) - A + 1 << '
';
    }
    return 0;
}