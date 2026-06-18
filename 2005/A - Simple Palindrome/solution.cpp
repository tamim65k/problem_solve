#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    vector<int> test_cases(t);
    
    for (int i = 0; i < t; ++i) {
        cin >> test_cases[i];
    }
    
    char vowels[] = {'a', 'e', 'i', 'o', 'u'};
    int vowels_count = 5;
    
    for (int i = 0; i < t; ++i) {
        int n = test_cases[i];
        string res = "";
        long long vowelSeq = n / vowels_count;
        int rem = n % vowels_count;
 
        while (vowelSeq--) {
            res += "aeiou";
        }
        for (int j = 0; j < rem; ++j) {
            res += vowels[j];
        }
        
        sort(res.begin(), res.end());
        cout << res << endl;
    }
    
    return 0;
}