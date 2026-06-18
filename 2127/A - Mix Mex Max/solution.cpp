#include<bits/stdc++.h>
using namespace std;
 
int main(){
  int t;cin>>t; 
  while(t--){
    int n; cin>>n; 
    vector<int> v(n);
    for(auto &i:v) cin>>i; 
 
    set<int> s(v.begin(),v.end());
    s.erase(-1);
    if(s.size()<=1 and !s.count(0))
      cout<<"YES
";
    else cout<<"NO
";
  }
  return 0;
}