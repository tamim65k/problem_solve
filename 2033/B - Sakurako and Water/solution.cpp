#include <bits/stdc++.h>
using namespace std;
 
#define FASTER ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '
'
 
void solve() {
    int n;
    cin >> n;
    vector<vector<int>> a(n, vector<int>(n));
 
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
 
    int operations = 0;
 
    for (int startRow = n - 1; startRow >= 0; startRow--) {
        for (int startCol = n - 1; startCol >= 0; startCol--) {
            if (a[startRow][startCol] < 0) {
                int increment = -a[startRow][startCol];
                operations += increment;
                for (int k = 0; k <= min(startRow, startCol); k++) {
                    a[startRow - k][startCol - k] += increment;
                }
            }
        }
    }
 
    cout << operations << endl;
}
 
int main() {
    FASTER;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}