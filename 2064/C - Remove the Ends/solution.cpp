#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
void solve() {
    int N;
    cin >> N;
    long long pos_sum = 0;
    long long neg_sum = 0;
    for (int i = 0; i < N; ++i) {
        long long a;
        cin >> a;
        if (a < 0) {
            neg_sum -= a;
        } else {
            pos_sum += a;
        }
        neg_sum = max(neg_sum, pos_sum); 
    }
    cout << neg_sum << "
";
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
 
    return 0;
}