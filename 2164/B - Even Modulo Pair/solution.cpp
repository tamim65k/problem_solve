#include <iostream>
#include <vector>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        bool found = false;
        long long x = -1, y = -1;
        
        for (int i = 0; i < n && !found; i++) {
            for (int j = i + 1; j < n && !found; j++) {
                long long mod_result = a[j] % a[i];
                if (mod_result % 2 == 0) {
                    x = a[i];
                    y = a[j];
                    found = true;
                }
            }
        }
        
        if (found) {
            cout << x << " " << y << "
";
        } else {
            cout << "-1
";
        }
    }
    
    return 0;
}