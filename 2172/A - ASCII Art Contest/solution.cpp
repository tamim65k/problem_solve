#include<bits/stdc++.h>
using namespace std;
 
int main(){
  int a,b,c; cin>>a>>b>>c; 
  vector<int>v({a,b,c});
  sort(v.begin(), v.end());
  if(v[2]-v[0]>=10)
    cout<<"check again "<<'
';
  else cout<<"final "<<v[1]<<'
';
}