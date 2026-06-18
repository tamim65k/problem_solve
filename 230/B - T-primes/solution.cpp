#include <iostream>
#include <unordered_set>
#include <vector>
#include <cmath>
 
using namespace std;
 
const int MAX = 1000000;
unordered_set<long long> tPrimes;
 
void generateTPrimes() {
    vector<bool> isPrime(MAX + 1, true);
    isPrime[0] = isPrime[1] = false; // 0 and 1 are not prime numbers
 
    for (int i = 2; i * i <= MAX; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= MAX; j += i) {
                isPrime[j] = false; // Mark multiples of i as non-prime
            }
        }
    }
 
    for (int i = 2; i <= MAX; i++) {
        if (isPrime[i]) {
            tPrimes.insert((long long)i * i); // Store T-primes
        }
    }
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n;
    cin >> n;
    generateTPrimes();
 
    for (int i = 0; i < n; i++) {
        long long x;
        cin >> x;
        cout << (tPrimes.count(x) ? "YES" : "NO") << '
'; // Check for T-primes
    }
 
    return 0;
}