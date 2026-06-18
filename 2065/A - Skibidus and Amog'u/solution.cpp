#include<bits/stdc++.h>
using namespace std;
signed main() {
  int t; cin >> t;
  while (t--) {
    string s; cin >> s;
    s = s.substr(0, s.size() - 2);
    s += 'i';
    cout << s << endl;
  }
  return 0;
}