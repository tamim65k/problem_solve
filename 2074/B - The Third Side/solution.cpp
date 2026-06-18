#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
#define FASTER cin.tie(0) -> sync_with_stdio(0); cout.tie(0);
 
void solve() {
    int n;
    cin >> n;
 
    priority_queue<int, vector<int>, greater<int>> minHeap;
 
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        minHeap.push(x);
    }
 
    while (minHeap.size() > 1) {
        int smallest1 = minHeap.top();
        minHeap.pop();
        int smallest2 = minHeap.top();
        minHeap.pop();
 
        int newSum = smallest1 + smallest2 - 1;
        minHeap.push(newSum);
    }
 
    cout << minHeap.top() << '
';
}
 
signed main() {
    FASTER;
 
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
 
    return 0;
}