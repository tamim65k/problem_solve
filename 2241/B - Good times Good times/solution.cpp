#include<bits/stdc++.h>
using namespace std;
 
int main(){
  int t; cin>>t;
  while(t--){
    string a; cin>>a;
    if(a.length() ==1) cout<<11<<'
';
    else {
      cout << 1;
      for (int i = 1; i < a.length(); i++) {
        cout << 0;
      }
    cout << 1<<'
';
    }
  }
  return 0;
}