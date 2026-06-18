#include<bits/stdc++.h>
using namespace std;
 
string toLower(string s){
  for(char &c: s){
    c=tolower(c);
  }
  return s;
}
 
int main(){
  ios::sync_with_stdio(false), cin.tie(nullptr);
 
  map<string,int> val;
  val["tetrahedron"] = 4;
  val["cube"] = 6;
  val["octahedron"] = 8;
  val["dodecahedron"] = 12;
  val["icosahedron"] = 20;
 
  int n,t(0); cin>>n;
 
  for(int i=0;i<n;i++){
    string s; cin>>s;
    s=toLower(s);
    t+=val[s];
  }
 
  cout<<t<<'
';
  return 0;
 }