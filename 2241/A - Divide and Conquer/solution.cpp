#include<bits/stdc++.h>
using namespace std;
 
int main(){
  int t; cin>>t;
  while(t--){
    int a,b; cin>>a>>b;
    if(a<b){
      cout<<"NO
";
    }
    else if(a%b!=0){
      cout<<"NO
";
    }
    else cout<<"YES
";
  }
 
  return 0;
}