#include <bits/stdc++.h>
using namespace std;
 
long long gcd(long long a, long long b) {
  while (b != 0) {
    a %= b;
    swap(a, b);
  }
  return a;
}
 
int main() {
  long long t;
  cin >> t;
  while (t--) {
    long long a, b, k;
    cin >> a >> b >> k;
    long long g = gcd(a, b);
    if (a / g <= k and b / g <= k)
      cout << 1 << '
';
    else
      cout << 2 << '
';
  }
  return 0;
}