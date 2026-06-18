#include <iostream>
#include <algorithm>
using namespace std;
 
int compute_count(int a1, int a2, int a4, int a5, int a3) {
    int count = 0;
    if (a3 == a1 + a2) count++;
    if (a4 == a2 + a3) count++;
    if (a5 == a3 + a4) count++;
    return count;
}
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int a1, a2, a4, a5;
        cin >> a1 >> a2 >> a4 >> a5;
        
        // Check for Fibonacciness 3
        if (a4 == a1 + 2 * a2 && a5 == 2 * a1 + 3 * a2) {
            cout << 3 << endl;
            continue;
        }
        
        // Calculate possible a3 values
        int a3_1 = a1 + a2;
        int a3_2 = a4 - a2;
        int a3_3 = a5 - a4;
        
        // Compute counts for each a3
        int count1 = compute_count(a1, a2, a4, a5, a3_1);
        int count2 = compute_count(a1, a2, a4, a5, a3_2);
        int count3 = compute_count(a1, a2, a4, a5, a3_3);
        
        // Find maximum count
        int max_count = max({count1, count2, count3});
        cout << max_count << endl;
    }
    return 0;
}