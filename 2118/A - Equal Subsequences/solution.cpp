#include<bits/stdc++.h>
using namespace std;
 
void solve(){
  int n,k;cin>>n>>k;
  for(int i=0;i<k;i++)
    cout<<1;
  for(int i=0;i<n-k;i++)
    cout<<0;
  cout<<'
';
}
 
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;cin>>t;
  while(t--) solve();
  return 0;
}