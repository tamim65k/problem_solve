#include <iostream>
#include <vector>
using namespace std;
 
void find_floor(int t, vector<pair<int, int>> test_cases) {
    for (int i = 0; i < t; i++) {
        int n = test_cases[i].first;
        int x = test_cases[i].second;
 
        if (n <= 2) {
            cout << 1 << endl;
        } else {
            n -= 2; 
            int floor_number = (n + x - 1) / x + 1;  
            cout << floor_number << endl;
        }
    }
}
 
int main() {
    int t;
    cin >> t;
 
    vector<pair<int, int>> test_cases(t);
    for (int i = 0; i < t; i++) {
        cin >> test_cases[i].first >> test_cases[i].second;
    }
 
    find_floor(t, test_cases);
 
    return 0;
}