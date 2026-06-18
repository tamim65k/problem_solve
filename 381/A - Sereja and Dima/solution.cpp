#include <bits/stdc++.h>
using namespace std;
 
int main() {
  ios::sync_with_stdio(false), cin.tie(nullptr);
  int n;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; i++) cin >> v[i];
 
  int left(0), right(n - 1), s(0), d(0);
  bool turnSereja(true);
  while (left <= right) {
    int pick(0);
    if (v[right] > v[left]) {
      pick = v[right];
      right--;
    } else {
      pick = v[left];
      left++;
    }
 
    if (turnSereja) s += pick;
    else d += pick;
    turnSereja = !turnSereja;
  }
 
  cout << s << ' ' << d << '
';
  return 0;
}