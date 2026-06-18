#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int t;
    cin >> t;
    vector<int> results(t);
 
    for (int i = 0; i < t; ++i) {
        int n;
        cin >> n;
        vector<int> efficiencies(n - 1);
        int sum_efficiencies = 0;
 
        for (int j = 0; j < n - 1; ++j) {
            cin >> efficiencies[j];
            sum_efficiencies += efficiencies[j];
        }
 
        int missing_efficiency = -  sum_efficiencies;
        results[i] = missing_efficiency;
    }
 
    for (const auto &result: results) {
        cout << result << endl;
    }
 
    return 0;
}