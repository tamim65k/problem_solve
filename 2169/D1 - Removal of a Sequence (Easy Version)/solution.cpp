#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        long long x, y, k;
        cin >> x >> y >> k;
        
        long long n = 1e12;
        
        for (int op = 0; op < x; op++) {
            long long removed = n / y;
            n = n - removed;
            
            if (n < k) {
                k = -1;
                break;
            }
        }
        
        if (k == -1) {
            cout << -1 << "
";
        } else {
            long long pos = k;
            for (int op = x - 1; op >= 0; op--) {
                long long block = pos / (y - 1);
                long long offset = pos % (y - 1);
                if (offset == 0) {
                    block--;
                    offset = y - 1;
                }
                pos = block * y + offset;
            }
            cout << pos << "
";
        }
    }
    
    return 0;
}