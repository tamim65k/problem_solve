#include<bits/stdc++.h>
using namespace std;
 
void solve(){
  int l1,b1,l2,b2,l3,b3;
  cin>>l1>>b1>>l2>>b2>>l3>>b3;
  if((l1+l2+l3==b1 and b1==b2 and b2==b3) 
  or (b1+b2+b3==l1 and l1==l2 and l2==l3) 
  or (l2+l3==l1 and b2==b3 and b1+b2==l1) 
  or (b2+b3 == b1 && l2==l3 && l1+l2==b1))
    cout<<"YES
";
  else
    cout << "NO
";
}
 
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;cin>>t;
  while(t--) solve();
  return 0;
}