#include <bits/stdc++.h>
using namespace std;
 
signed main() {
    cin.tie(0) -> sync_with_stdio(0); cout.tie(0);
    int t; cin >> t;
    while (t--) {
        int n, k; cin >> n >> k;
        if (k % 2 == 0)
        {
            for (int i = 0; i < n - 2; ++i)
            {
                cout << n - 1 << ' ';
            }
            cout << n << ' ';
            cout << n - 1;
        } else {
            for (int i = 0; i < n - 2; ++i)
            {
                cout << n << ' ';
            }
            cout << n << ' ';
            cout << n - 1;
        }
        cout << '
';
    }
    return 0;
}