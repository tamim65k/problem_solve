#include<bits/stdc++.h>
using namespace std;
 
int main(){
  int t;cin>>t; 
  while(t--){
    int n; cin>>n;
    string s1,s2; cin>>s1>>s2;
 
    int f[26] = {0};
    for(int i=0;i<n;i++){
      f[s1[i]-'a']++;
      f[s2[i]-'a']--;
    }
 
    bool ok(true);
    for(int i=0;i<26;i++){
      if(f[i]!=0){
        ok = false;
        break;
      }
    }
 
    cout<<(ok? "YES":"NO")<<'
';
  }
}