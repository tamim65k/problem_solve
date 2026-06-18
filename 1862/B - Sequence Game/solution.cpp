#include <bits/stdc++.h>
using namespace std;
#define int long long
 
int32_t main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "a", stderr);
#endif
 
    int q;
    cin >> q;
    while (q--) {
        int n;
        cin >> n;
        vector<int> v;
 
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (i && v.back() > x) v.push_back(1);
            v.push_back(x);
        }
 
        cout << v.size() << endl;
        for (int e: v) {
            cout << e << " ";
        }
        cout << endl;
    }
    return 0;
}