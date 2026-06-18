#include<bits/stdc++.h>
using namespace std;
 
int main(){
  int t; cin>>t;
  while(t--){
    int n; cin>>n; 
    bool odd(false),even(false);
    vector<int>v(n);
    for(int i=0;i<n;i++){
      cin>>v[i];
      if(v[i]%2==0) even=true;
      else odd = true; 
    }
 
    if(odd and even) sort(v.begin(),v.end());
    for(int i=0;i<n;i++) cout<<v[i]<<" 
"[i==n-1];
  }
}