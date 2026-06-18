#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin >> n;
  while (n--) {
    int a;
    cin >> a;
    vector<int> v(a);
 
    for (int &i : v) {
      cin >> i;
      i = abs(i);
    }
 
    int b = v[0];
    sort(v.begin(), v.end());
    cout << (b <= v[ceil(a / 2)] ? "YES
" : "NO
");
  }
}