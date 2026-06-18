#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n, a;
        cin >> n >> a;
        
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        
        int less_count = 0, greater_count = 0;
        
        for (int i = 0; i < n; i++) {
            if (v[i] < a) less_count++;
            else if (v[i] > a) greater_count++;
        }
        
        long long b;
        if (greater_count > less_count) {
            b = (long long)a + 1;
        } else {
            b = (long long)a - 1;
        }
        
        cout << b << "
";
    }
    
    return 0;
}