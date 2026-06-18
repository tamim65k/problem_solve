#include<bits/stdc++.h>
using namespace std;
 
void solve(){
  int n, m;
  cin >> n >> m;
  vector<int> v(n);
 
  for(int i=0;i<n;i++)
    cin>>v[i];
 
  int ans = min(abs(m - v.front()), abs(m - v.back())) + v.back() - v[0];
  cout << ans << '
';
}
 
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;cin>>t;
  while(t--) solve();
  return 0;
}