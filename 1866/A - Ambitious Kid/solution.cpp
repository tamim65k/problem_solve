#include<bits/stdc++.h>
using namespace std;
 
int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "a", stderr);
#endif
    int n;
    cin >> n;
 
    int a[n];
    bool hasZero = false;
    int minOperations = INT_MAX;
 
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
 
    for (int i = 0; i < n; i++) {
        if (a[i] == 0) {
            hasZero = true;
            break;
        } else
            minOperations = min(minOperations, abs(a[i]));
    }
 
    if (hasZero) {
        cout << 0 << endl;
    } else
        cout << minOperations << endl;
 
    return 0;
}