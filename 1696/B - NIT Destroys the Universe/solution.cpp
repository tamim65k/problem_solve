#include<bits/stdc++.h>
#define endl '
'
using namespace std;
 
bool allZero(const vector<int> & arr) {
    for (int i : arr) {
        if (i != 0) return false;
    }
    return true;
}
 
bool contiguousNonZeroSegment(const vector<int>& arr) {
    int n = arr.size();
    int left = -1, right = -1;
 
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            left = i;
            break;
        }
    }
 
    for (int i = n - 1; i >= 0; i--) {
        if (arr[i] != 0)
        {
            right = i;
            break;
        }
    }
 
    for (int i = left; i <= right; i++) {
        if (arr[i] == 0)
        {
            return false;
        }
    }
    return true;
}
 
signed main() {
    cin.tie(0) -> sync_with_stdio(0);
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> v(n);
        for (auto & i : v) cin >> i;
 
        if (allZero(v))
        {
            cout << 0 << endl;
        } else if (contiguousNonZeroSegment(v)) {
            cout << 1 << endl;
        } else {
            cout << 2 << endl;
        }
    }
 
    return 0;
}