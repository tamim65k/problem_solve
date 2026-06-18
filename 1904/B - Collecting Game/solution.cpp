#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define FASTER cin.tie(nullptr)->sync_with_stdio(false),cout.tie(nullptr)
#define endl '
'
 
const int N = 2e5 + 7;
ll suffix[N];
 
void solve() {
    int n; cin >> n;
    vector<pair<int, int>>v(n);
    memset(suffix, 0, sizeof suffix);
    for (int i = 0; i < n; i++) {
        cin >> v[i].first;
        v[i].second = i;
    }
 
    sort(v.begin(), v.end(), greater<pair<int, int>>());
    for (int i = n - 1; i >= 0; i--) {
        suffix[i] = suffix[i + 1] + v[i].first;
    }
 
    vector<int> ans(n);
    ans[v[0].second] = n - 1;
 
    for (int i = 1; i < n; i++) {
        int idx = v[i].second;
        int prev_idx = v[i - 1].second;
        if (suffix[i] >= v[i - 1].first)
        {
            ans[idx] = ans[prev_idx];
        }
        else ans[idx] = n - i - 1;
    }
 
    for (int i : ans) cout << i << ' ';
    cout << endl;
}
 
signed main() {
    FASTER;
    int t; cin >> t;
    while (t--) solve();
    return 0;
}